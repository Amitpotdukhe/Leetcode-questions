class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>s;
        vector<int>ans;
        for(int i=nums.size()-1;i>=0;i--)
		    s.push(nums[i]);
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(s.size()==0)
                ans.push_back(-1);
            else if(s.size()>0&&s.top()>nums[i])
                ans.push_back(s.top());
            else if(s.size()>0&&s.top()<=nums[i])
            {
                while(s.size()>0&&s.top()<=nums[i])
                    s.pop();
                if(s.size()==0)
                    ans.push_back(-1);
                else
                    ans.push_back(s.top());
            }
            s.push(nums[i]);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
//         stack<int> stack;
//         int n = nums.size();
//         vector<int> nge(n, -1);
        
//         for(int i=0; i<2*n; i++) {
//             int ele = nums[i%n];
//             while(!stack.empty() && stack.top() <= ele) {
//                 nge[i%n] = stack.top();
//                 stack.pop();
//             }
            
//             // if(i<n) {
//             //     if(stack.empty()) {
//             //         nge[i%n]=-1;
//             //     } else {
//             //         nge[i%n]=stack.top();
//             //     }
//             // }
            
//             stack.push(ele);
//         }
        
//         return nge;
        
    }
};
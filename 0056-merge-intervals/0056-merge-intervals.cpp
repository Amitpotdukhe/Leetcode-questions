class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        stack<vector<int>> stack;
        sort(intervals.begin(), intervals.end());
        
        stack.push(intervals[0]);
        int i=1;
        
        while(i<intervals.size()) {
            vector<int> x = stack.top();
            if(x[1] >= intervals[i][0]) {
                x[1] = max(intervals[i][1], x[1]);
                stack.pop();
                stack.push(x);
            } else {
                stack.push(intervals[i]);
            }            
            i++;
        }
        
        while(!stack.empty()) {
            ans.push_back(stack.top());
            stack.pop();
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};
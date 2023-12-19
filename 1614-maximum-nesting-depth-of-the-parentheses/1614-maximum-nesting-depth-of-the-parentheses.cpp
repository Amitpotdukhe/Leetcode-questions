class Solution {
public:
    int maxDepth(string s) {
        stack<char> stack;
        int ans=0, cnt=0;
        
        for(auto it : s) {
            if(it=='(') {
                cnt++;
            } else if(it==')'){
                ans=max(ans, cnt);
                cnt--;
            }
        }
        ans = max(ans, cnt);
        return ans;
        
    }
};
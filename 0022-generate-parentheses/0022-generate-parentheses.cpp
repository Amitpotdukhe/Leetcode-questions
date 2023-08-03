class Solution {
public:
    void solve(int open, int close, vector<string>& ans, string op) {
        if(open<0 || close<0) return;
        if(open==0 and close==0) {
            ans.push_back(op);
            return;
        }
        
        if(open == close) {
            string x = op + "(";
            solve(open-1, close, ans, x);
        } else {
            string x1 = op + "(";
            string x2 = op + ")";
            solve(open-1, close, ans, x1);
            solve(open, close-1, ans, x2);
        }
        return;
        
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(n, n, ans, "");
        
        return ans;
    }
};
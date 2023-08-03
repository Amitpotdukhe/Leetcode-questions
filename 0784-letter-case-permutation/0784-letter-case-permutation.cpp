class Solution {
public:
    
    void solve(string& s, vector<string>& ans, int idx, string op) {
        if(idx >= s.length()) {
            ans.push_back(op);
            return;
        }
        
        
        if(isalpha(s[idx])) {
            string x1 = op;
            string x2 = op;
            if(isupper(x1[idx])) {
                x1[idx] = x1[idx]+32;
            } else {
                x1[idx] = x1[idx]-32;
            }
            
            solve(s, ans, idx+1, x1);
            solve(s, ans, idx+1, x2);
        } else {
            solve(s, ans, idx+1, op);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        solve(s, ans, 0, s);
        
        return ans;
    }
};
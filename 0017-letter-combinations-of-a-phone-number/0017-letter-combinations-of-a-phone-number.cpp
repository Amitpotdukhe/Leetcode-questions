class Solution {
public:
    void solve(string digits, vector<string>&ans, vector<string>&map, int idx, string curr) {
        if(idx==digits.length()) {
            ans.push_back(curr);
            return;
        }
        
        for(int i=0; i<map[digits[idx]-'0'].length(); i++) {
            curr += map[digits[idx]-'0'][i];
            solve(digits, ans, map, idx+1, curr);
            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        if(n==0) return {};
        vector<string> map = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"}; 
        vector<string> ans;
        solve(digits, ans, map, 0, "");
        return ans;
    }
};
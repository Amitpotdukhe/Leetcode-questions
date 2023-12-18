class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        solve(s, ans, {},"", 0);
        return ans;
    }
    void solve(string s, vector<vector<string>> &ans, vector<string>curr, string a, int idx) {
        if(idx>=s.length()) {
            ans.push_back(curr);
            return;
        }
        
        for(int i=idx; i<s.length(); i++) {
            if(isPalindrome(s, idx, i)) {
                curr.push_back(s.substr(idx, i-idx+1));
                cout<<s.substr(idx, idx-i+1)<<" ";
                solve(s, ans, curr, a, i+1);
                curr.pop_back();
            }
        }
        
        
    }
    bool isPalindrome(string s, int i, int j) {
        while(i<=j) {
            if(s[i] != s[j]) return false;
            i++, j--;
        }
        return true;
    }
};
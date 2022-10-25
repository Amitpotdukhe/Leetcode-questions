class Solution {
public:
    int ans = INT_MIN;
    
    bool checkUnique(string& str) {
        int checker = 0;
 
        for (int i = 0; i < str.length(); i++) {
            int bitAtIndex = str[i] - 'a';
            if ((checker & (1 << bitAtIndex)) > 0) {
                return false;
            }
            checker = checker | (1 << bitAtIndex);
        }

        return true;
    }
    
    void solve(vector<string>& arr, string curr, int idx) {
        if(idx>=arr.size()) {
            if(checkUnique(curr)) {
                int x = curr.length();
                ans = max(ans, x);
            }
            return;
        }
        
        string a = curr + arr[idx], b=curr;
        solve(arr, a, idx+1);
        solve(arr, b, idx+1);
    }
    
    int maxLength(vector<string>& arr) {
        solve(arr, "", 0);
        return ans;
    }
};
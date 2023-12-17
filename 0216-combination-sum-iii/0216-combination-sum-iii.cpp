class Solution {
public:
    void solve(int k, int n, vector<vector<int>>& ans, vector<int> curr, int number) {
        if(curr.size()==k and n==0) {
            ans.push_back(curr);
            return;
        }
        if(n<0 || number>9) {
            return;
        }
        
        for(int i=number; i<=9; i++) {
            curr.push_back(i);
            solve(k, n-i, ans, curr, i+1);
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        solve(k, n, ans, {}, 1);
        return ans;
    }
};
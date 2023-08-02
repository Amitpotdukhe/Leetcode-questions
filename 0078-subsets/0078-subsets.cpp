class Solution {
public:
    void solve(vector<int>& nums, int idx, vector<vector<int>>& ans, vector<int> op) {
        if(idx >= nums.size()) {
            ans.push_back(op);
            return;
        }
        
        vector<int> op1 = op;
        vector<int> op2 = op;
        op1.push_back(nums[idx]);
        solve(nums, idx+1, ans, op1);
        solve(nums, idx+1, ans, op2);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        solve(nums, 0, ans, op);
        
        return ans;
    }
};
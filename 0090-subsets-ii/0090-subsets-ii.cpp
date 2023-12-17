class Solution {
public:
    void solve(vector<int>& nums, set<vector<int>>& ans, vector<int>v, int idx) {
        if(idx==nums.size()) {
            ans.insert(v);
            return;
        }
        
        // for(int i=idx; i<nums.size(); i++) {
        //     if(i>idx && nums[i]==nums[i-1]) continue;
        //     v.push_back(nums[i]);
        //     solve(nums,ans,v,i+1);
        //     v.pop_back();
        // }
        
        
            v.push_back(nums[idx]);
            solve(nums, ans, v, idx+1);
            v.pop_back();
            solve(nums, ans, v, idx+1);
        
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        sort(begin(nums), end(nums));
        solve(nums, ans, {}, 0);
        vector<vector<int>> a;
        for(auto it : ans) {
            a.push_back(it);
        }
        return a;
    }
};
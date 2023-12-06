class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        int x = nums.size()-k;
        int i=0;
        vector<int> ans;
        
        while(x<nums.size()) {
            ans.push_back(nums[x++]);
        }
        
        while(i<nums.size()-k) {
            ans.push_back(nums[i++]);
        }
        nums = ans;
    }
};
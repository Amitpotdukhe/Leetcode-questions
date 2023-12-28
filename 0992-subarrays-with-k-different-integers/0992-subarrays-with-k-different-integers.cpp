class Solution {
public:
    int solve(vector<int>& nums, int k) {
         unordered_map<int, int> map;
        int i=0, j=0, n=nums.size(), ans=0;

        while(j<n) {
            map[nums[j]]++;

            while(map.size() > k) {
                map[nums[i]]--;
                if(map[nums[i]] == 0) map.erase(nums[i]);
                i++;
            }

            ans+=(j-i+1);
            j++;
        }

        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       return solve(nums, k) - solve(nums, k-1);
    }
};
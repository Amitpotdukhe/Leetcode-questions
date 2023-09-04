class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i=0, cnt = 0;
        
        while(i<nums.size()) {
            int j=i+1;
            while(j<nums.size()) {
                if(nums[i] + nums[j] < target) {
                    cnt++;
                } else if(nums[i]+nums[j] >= target) {
                    break;
                }
                j++;
            }
            i++;
        }
        
        return cnt;
    }
};
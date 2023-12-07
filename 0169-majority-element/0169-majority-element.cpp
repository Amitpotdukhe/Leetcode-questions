class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        if(nums.size()==0) return 0;
        sort(nums.begin(), nums.end());
        int cnt=0;int prev=0;
        
        for(auto it : nums) {
            if(cnt>=nums.size()/2) {
                    return it;
                }
            if(prev==it) {
                cnt++;
                
            } else {
                cnt=1;
                prev=it;
            }
        }
        
        return 0;
    }
};
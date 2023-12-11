class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size(), i=0, j=n-1;
        
        while(i<=j) {
            int mid = i+(j-i)/2;
            
            if(nums[mid] == target) return true;
            
            if(nums[i] == nums[mid] && nums[mid] == nums[j]) {
                i++, j--;
                continue;
            }
            
            if(nums[i] <= nums[mid]) {
                if(target >= nums[i] && target <= nums[mid]) {
                    j=mid-1;
                } else {
                    i=mid+1;
                }
            } else {
                if(target <= nums[j] && target >= nums[mid]) {
                    i=mid+1;
                } else {
                    j=mid-1;
                }
            }
        }
        
        return false;
    }
};
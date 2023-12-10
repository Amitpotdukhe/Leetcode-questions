class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size(), i=0, j=n-1;
        
        while(i<=j) {
            int mid = i+(j-i)/2;
            
            if(nums[mid]==target) return mid;
            
            if(nums[i] <= nums[mid]) { //left sorted
                if(nums[i]<=target && target<=nums[mid]) {
                    j=mid-1;
                } else {
                    i=mid+1;
                }
            } else { //right sorted
                if(target<=nums[j] && target>=nums[mid]) {
                    i=mid+1;
                } else {
                    j=mid-1;
                }
            }
        }
        
        return -1;
    }
};
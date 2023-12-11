class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size(), i=0, j=n-1, idx=-1, ans=INT_MIN;
        
        while(i<=j) {
            int mid = i+(j-i)/2;
            
            if((mid==0 || nums[mid]>nums[mid-1]) && (mid==n-1 || nums[mid]>nums[mid+1])) return mid;
            
            if((mid==0 && nums[mid]<nums[mid+1]) || nums[mid]>nums[mid-1]) {
                i=mid+1;
            } else {
                j=mid-1;
            }
        }
        
        return -1;
    }
};
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(), i=0, j=n-1;
        if(n==1) return nums[0];
        
        while(i<=j) {
            int mid = i+(j-i)/2;
            
            if(nums[(mid-1+n)%n] > nums[mid] && nums[(mid+1)%n] > nums[mid]) {
                return nums[mid];
            } 
            
            if(nums[i] < nums[mid] && nums[j] < nums[mid]) {
                if(nums[i] < nums[j]) {
                    j=mid-1;
                } else {
                    i=mid+1;
                }
            } else if(nums[i] > nums[mid] && nums[j] > nums[mid]) {
                if(nums[(mid+n-1)%n] < nums[(mid+n+1)%n]) {
                    j=mid-1;
                } else {
                    i=mid+1;
                }
            } else {
                if(nums[i] < nums[mid]) {
                    j=mid-1;
                } else {
                    i=mid+1;
                }
            }
        }
        
        return -1;
    }
};
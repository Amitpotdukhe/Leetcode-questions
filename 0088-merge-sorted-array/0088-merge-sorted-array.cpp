class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        if(n <= 0) return;
        
//         int i=0, j=0;
//         int temp;
        
//         while(i<m+n) {
//             if(nums1[i] > nums2[j]) {
//                 temp = nums1[i];
//                 nums1[i] = nums2[j];
//                 nums2[j] = temp;
//             } else if(nums1[i] == 0) {
//                 nums1[i] = nums2[j];
//                 j++;
//             }
//             i++;
//         }
        
        int i = m-1, j = n-1;
        int k = m+n-1;
        
        while(i>=0 and j>=0) {
            if(nums1[i]>nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
        
        while(j >= 0) {
            nums1[k--] = nums2[j--];
        }
        
        
    }
};
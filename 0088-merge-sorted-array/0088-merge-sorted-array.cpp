class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k = m+n-1;
        cout<<k<<endl;
        if(m==0) nums1=nums2;
        
        while(m>0 && n>0) {
            cout<<m<<" "<<n<<endl;
            if(nums2[n-1] >= nums1[m-1]) {
                nums1[k] = nums2[n-1];
                n--;
                k--;
            } else {
                nums1[k] = nums1[m-1];
                m--;
                k--;
            }
        }
        
        while(m>0) {
            nums1[k--] = nums1[m-1];
            m--;
        }
        while(n>0) {
            nums1[k--] = nums2[n-1];
            n--;
        }
    }
};
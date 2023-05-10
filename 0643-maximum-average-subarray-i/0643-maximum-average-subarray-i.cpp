class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double maxm = INT_MIN;
        int i=0,j=0,sum=0;
        
        while(j<nums.size()) {
            sum+=nums[j];
            if(j-i+1 < k) {
                j++;
            } else if(j-i+1 == k) {
                double avg = (double)sum/k;
             
                maxm=max(maxm, avg);
                sum=sum-nums[i];
                i++;
                j++;
            }
        }
        return maxm;
    }
};
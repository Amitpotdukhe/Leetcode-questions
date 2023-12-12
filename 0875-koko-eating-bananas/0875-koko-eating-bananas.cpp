class Solution {
public:
    long long calculateHrs(vector<int>&piles, long long h) {
        long long x=0;
        for(long long i : piles) {
            x += ceil((long double)i/h);
        }

        return x;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long n=piles.size(), i=1, j=0, ans=0;
        for(long long it : piles) {j=max(j, it);}

        while(i<=j) {
            long long mid = i+(j-i)/2;
            long long totalHours = calculateHrs(piles, mid);
            if(totalHours <= h) {
                ans = mid;
                j = mid-1;
            }  else {
                i = mid + 1;
            }
        }

        return ans;
    }
};
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> ml(n), mr(n);
        
        int a=height[0];
        ml[0]=a;
        for(int i=1; i<n; i++) {
            ml[i]=max(height[i], a);
            a=max(a, height[i]);
        }
        int b=height[n-1];
        mr[n-1]=b;
        for(int i=n-2; i>=0; i--) {
            mr[i]=max(height[i], b);
            b=max(b, height[i]);
        }
        
        int ans=0;
        for(int i=0; i<n; i++) {
            ans += min(ml[i],mr[i])-height[i];
        }
        return ans;
    }
};
class Solution {
public:
    int longestOnes(vector<int>& s, int k) {
        int ans=0, i=0, j=0, n=s.size();

        // this is working
        // while(j<n) {
        //     if(s[j]==1) {
        //         j++;
        //     } else {
        //         if(k>0) {
        //             k--;
        //             j++;
        //         } else {
        //             if(s[i]==0) {
        //                 k++;
        //                 i++;
        //             } else {
        //                 i++;
        //             }
        //         }
        //     }
        //     ans=max(ans,j-i);
        // }
        
        while(j<n) {
            if(s[j]==0) k--;
            
            while(k<0) {
                if(s[i]==0) k++;
                i++;
            }
            
            ans = max(ans,j-i+1);
            j++;
        }
        

        return ans;
    }
};
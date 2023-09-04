class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        for(int i=0; i<image.size(); i++) {
            int j=0, k=image[0].size()-1;
            
            while(j<=k) {
                int a = image[i][k];
                int b = image[i][j];
                image[i][j] = a == 1 ? 0 : 1;
                image[i][k] = b == 1 ? 0 : 1;
                j++;
                k--;
            }
            
        }
        
        return image;
    }
};
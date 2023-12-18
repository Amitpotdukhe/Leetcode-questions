class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(), m=board[0].size();
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(board[i][j]==word[0]) {
                    if(solve(board, word, i, j, 0)) {
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
    
    bool solve(vector<vector<char>>& arr, string word, int i, int j, int idx) {
        if(idx>=word.length()) return true;
        if(i<0 || j<0 || i>=arr.size() || j>=arr[0].size() || arr[i][j]=='*') return false;
        if(word[idx] != arr[i][j]) return false;
        
        char c = arr[i][j];
        arr[i][j] = '*';
        
        bool ans = solve(arr,word,i,j+1,idx+1) || solve(arr,word,i,j-1,idx+1) || 
               solve(arr,word,i-1,j,idx+1) || solve(arr,word,i+1,j,idx+1);
        
        arr[i][j] = c;
        return ans;
    }
};
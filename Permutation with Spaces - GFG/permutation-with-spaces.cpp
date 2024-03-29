//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    
    void solve(string&s, int idx, vector<string>& ans, string op) {
        if(idx == s.length()-1) {
            op+=s[s.length()-1];
            ans.push_back(op);
            return;
        }
        string op1 = op;
        string op2 = op;
        
        op1 += s[idx];
        op1 += " ";
        op2 += s[idx];
        
        solve(s, idx+1, ans, op1);
        solve(s, idx+1, ans, op2);
    }
    
    vector<string> permutation(string s){
        vector<string> ans;
        solve(s, 0, ans, {});
        return ans;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends
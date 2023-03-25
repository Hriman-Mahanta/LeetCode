//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}
// } Driver Code Ends

int LCS(string X, string Y, int m, int n) {
        int dp[m+1][n+1];
        for(int i=0; i<m+1; i++){
            for(int j=0; j<n+1; j++){
                if(i==0 || j==0)
                    dp[i][j] = 0;
            }
        }
        for(int i=1; i<m+1; i++){
            for(int j=1; j<n+1; j++){
                if(X[i-1] == Y[j-1])
                    dp[i][j] = 1+dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[m][n];
    }
    
int minDeletions(string str, int n) { 
    //complete the function here
    string temp = str;
    reverse(temp.begin(), temp.end());
    return n - LCS(str, temp, n, n);
} 
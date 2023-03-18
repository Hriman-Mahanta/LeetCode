//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    // int dp[1001][1001];
    // //Function to find the length of longest common subsequence in two strings.
    // int lcs(int x, int y, string s1, string s2)
    // {
    //     memset(dp, -1, sizeof (dp));
    //     return lcs_h(x, y, s1, s2);
    // }
    
    // int lcs_h(int x, int y, string s1, string s2)
    // {
    //     // your code here
    //     if(x<=0 || y<=0)
    //         return 0;
    //     if(dp[x][y]>=0)
    //         return dp[x][y];
    //     if(s1[x-1] == s2[y-1])
    //         dp[x][y] = 1+lcs_h(x-1, y-1, s1, s2);
    //     else
    //         dp[x][y] = max(lcs_h(x-1, y, s1, s2), lcs_h(x, y-1, s1, s2));
    //     return dp[x][y];
    // }
    
    int lcs(int x, int y, string s1, string s2){
        int dp[x+1][y+1];
        for(int i=0; i<x+1; i++){
            for(int j=0; j<y+1; j++){
                if(i==0 || j==0)
                    dp[i][j] = 0;
            }
        }
        for(int i=1; i<x+1; i++){
            for(int j=1; j<y+1; j++){
                if(s1[i-1] == s2[j-1])
                    dp[i][j] = 1+dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[x][y];
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends
//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>> dp(N+1, vector<int>(W+1, -1));
        return solve(0, N, W, val, wt, dp);
    }
    
    int solve(int ind, int N, int W, int val[], int wt[], vector<vector<int>>& dp){
        if(ind == N)
            return 0;
        if(dp[ind][W] != -1)
            return dp[ind][W];
        if(wt[ind] > W)
            return dp[ind][W] = solve(ind+1, N, W, val, wt, dp);
        else
            return dp[ind][W] = max(solve(ind+1, N, W, val, wt, dp), val[ind] + solve(ind, N, W-wt[ind], val, wt, dp));
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends
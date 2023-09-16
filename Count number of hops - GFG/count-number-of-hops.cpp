//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    int mod = 1e9 + 7;
    long long countWays(int n)
    {
        
        // your code here
        vector<long long> dp(n+1, -1);
        return solve(0, n, dp);
        
    }
    
    long long solve(int idx, int n, vector<long long>& dp){
        if(idx == n)
            return 1;
        if(idx > n)
            return 0;
        if(dp[idx] != -1)
            return dp[idx];
        long long one = solve(idx+1, n, dp)%mod;
        long long two = solve(idx+2, n, dp)%mod;
        long long three = solve(idx+3, n, dp)%mod;
        return dp[idx] = (one+two+three)%mod;
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends
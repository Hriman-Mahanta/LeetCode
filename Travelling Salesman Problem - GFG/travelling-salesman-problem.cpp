//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
int total_cost(vector<vector<int>>cost){
    // Code here
    int n = cost.size();
    vector<vector<int>> dp(n, vector<int>((1<<n), -1));
    return solve(cost, dp, 0, 1, n);
}

int solve(vector<vector<int>>& cost, vector<vector<int>>& dp, int x, int mask, int n){
    if(mask == (1<<n)-1)
        return cost[x][0];
    if(dp[x][mask] != -1)
        return dp[x][mask];
    int minval = INT_MAX;
    for(int i=1; i<n; i++){
        if((mask&(1<<i)) == 0){
            minval = min(minval, cost[x][i] + solve(cost, dp, i, mask|(1<<i), n));
        }
        
    }
    return dp[x][mask] = minval;
}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>cost(n, vector<int>(n, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)cin >> cost[i][j];
		Solution obj;
		int ans = obj.total_cost(cost);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends
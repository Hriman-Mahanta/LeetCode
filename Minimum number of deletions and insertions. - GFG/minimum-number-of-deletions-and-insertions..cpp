//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		
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
	public:
	int minOperations(string str1, string str2) 
	{ 
	    // Your code goes here
	    int len1 = str1.length();
	    int len2 = str2.length();
	    return len1+len2 - 2*LCS(str1, str2, len1, len2);
	} 
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends
//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
	    int LRS(string str1, string str2, int len1, int len2){
	        int dp[len1+1][len2+1];
	        for(int i=0; i<len1+1; i++){
	            for(int j=0; j<len2+1; j++){
	                if(i==0 || j==0)
	                    dp[i][j] = 0;
	            }
	        }
	        for(int i=1; i<len1+1; i++){
	            for(int j=1; j<len2+1; j++){
	                if((str1[i-1] == str2[j-1]) && i!=j)
	                    dp[i][j] = 1+dp[i-1][j-1];
	                else
	                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
	            }
	        }
	        return dp[len1][len2];
	    }
		int LongestRepeatingSubsequence(string str){
		    // Code here
		    int len = str.length();
		    return LRS(str, str, len, len);
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends
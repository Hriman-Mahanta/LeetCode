//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int N, int S){
        // code here
        if(S == 0 && N>1)
            return "-1";
        string res;
        while(S > 0){
            if(S >= 9){
                res.push_back('9');
                S -= 9;
            }
            else{
                res.push_back('0' + S);
                S -= S;
            }
        }
        if(res.length() > N)
            return "-1";
        while(res.length() < N){
            res.push_back('0');
        }
        return res;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends
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
        int dp[W+1];
        dp[0] = 0;
        int maxi = 0, cap = 0;
        
        for(int i = 1; i<= W; i++){
            maxi = 0;
            
            for(int j = 0; j < N; j++){
                if(wt[j] <= i){
                    int bag = i - wt[j];
                    cap = val[j] + dp[bag];
                }
                if(maxi< cap){
                    maxi = cap;
                }
            }
            dp[i] = maxi;
        }
        return dp[W];
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
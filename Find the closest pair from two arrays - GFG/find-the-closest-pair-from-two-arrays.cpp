//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function teamplate for C++

class Solution{
  public:
    vector<int> printClosest(int arr[], int brr[], int n, int m, int x) {
        //code here
        vector<int> ans;
        int s =0 , e = m -1;
        int l1 = INT_MIN;
        int l2 = INT_MIN;
        int c = INT_MAX;
        
        while(s < n && e >=0){
            int sum = arr[s]+brr[e];
            int dif = abs(sum - x);
            if(dif < c){
                c = dif;
                l1 = arr[s];
                l2 = brr[e];
            }
            if(sum > x){
                e--;
            }
            else{
                s++;
            }
        }
        ans.push_back(l1);
        ans.push_back(l2);
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	int m,n,x;
	while(t--)
    {
        cin>>n>>m;
        int a[n],b[m];
        
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        for(int i=0;i<m;i++)
            cin>>b[i];
            
        cin>>x;
        
        vector<int> ans;
        Solution ob;
        ans = ob.printClosest(a, b, n, m, x);
        cout << abs(ans[0] + ans[1] - x) << endl;
        
    }
    return 0;
}

// } Driver Code Ends
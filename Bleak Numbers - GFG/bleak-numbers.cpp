//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:

    int cntBits(int n){
        int setBits = 0;
        while(n>0){
            if((n&1) == 1)setBits++;
            n = n/2;
        }
        return setBits;
    }
    
	int is_bleak(int n)
	{
	    // Code here.
	    int m = n;
	    int x = 0;
	    
	    while(n >0){
	        n = n/2;
	        x++;
	    }
	    
	    for(int i = m-1; i>=m-32;i--){
	        if(i+cntBits(i) == m) return 0;
	    }
	    return 1;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends
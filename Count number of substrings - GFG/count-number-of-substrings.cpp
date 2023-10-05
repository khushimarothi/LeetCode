//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long int helper (string s, int k) {
    	//code here.
    	
    	if(k < 0)return 0;
    	
    	int i = 0, j = 0, c =0 ;
    	long long int ans  = 0;
    	int n[26] = {0};
    	
    	while(j < s.length()){
    	    
    	    n[s[j] -'a']++;
    	    if(n[s[j] -'a'] == 1) c++;
    	    
    	    while(c > k){
    	    
    	    n[s[i] - 'a']--;
    	    if(n[s[i] - 'a'] == 0)
    	      c--;
    	      
    	    i++;
    	}
    	ans += (j-i+1);
    	j++;
    	}
    	
    	return ans;
    }
    
    long long int substrCount (string s, int k){
        return helper(s,k) - helper(s,k-1);
    }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends
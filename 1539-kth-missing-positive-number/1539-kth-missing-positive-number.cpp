class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int low=0,n=arr.size(),m;
        while(low<n){
            m=(low+n)/2;
            if(arr[m]-1-m<k){
                low=m+1;
            }
            else{n=m;}
              }
return low+k;
    
    }
};
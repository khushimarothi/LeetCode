class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
            int n=arr.size();
            int low=0,high=n-1;
        int mid;
        while(low<high){
            mid=low+(high-low)/2;
            if(arr[mid]>=arr[mid+1]){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
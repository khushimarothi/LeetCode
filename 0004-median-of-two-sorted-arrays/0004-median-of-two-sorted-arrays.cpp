class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        
        int n = nums1.size();
        int m = nums2.size();
        
        vector<int> v;
        
        if(n > m) return findMedianSortedArrays(nums2, nums1);
        
        int low = 0, high = n;
        int left = (n + m + 1)/2;
        int t = n + m;
        
        while(low <= high){
            int mid = (low + high) >> 1;
            int mid2 = left - mid;
            int l1 = INT_MIN, l2 = INT_MIN;
            int r1 = INT_MAX, r2 = INT_MAX;
            
            if(mid < n) {
                r1 = nums1[mid];
            }
            if(mid2 < m){
                r2 = nums2[mid2];
            }
            if(mid - 1 >= 0){
                l1 = nums1[mid - 1];
            }
            if(mid2 - 1 >= 0){
                l2 = nums2[mid2 - 1];
            }
            if(l1 <= r2 && l2 <= r1){
                if( t%2 == 1){
                    return max(l1,l2);
                }
                return ((double)(max(l1,l2) + min(r1, r2))) / 2.0;
            }
            
            else if(l1 > r2) {
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
       return 0;
        
        
        
    }
};
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        
        vector<int> v;
        
        
        int t = m + n;
        int a = 0,b = 0;
        double ans;
        
        while( a<n && b < m){
            if(nums1[a] < nums2[b])
               v.push_back(nums1[a++]);
            else
                v.push_back(nums2[b++]);
        }
        
        while(a < n) {
            v.push_back(nums1[a++]);
        }
        while(b < m){
            v.push_back(nums2[b++]);
        }
        
        if(t%2 == 1){
            return v[t/2];
        }
        
        ans = ((double)v[t/2] + (double)v[t/2 - 1])/2.0;
        
        return ans;
        
    }
};
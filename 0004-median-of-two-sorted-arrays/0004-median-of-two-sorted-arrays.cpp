class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        
        vector<int> v;
        for(int i = 0; i < n; i++){
            v.push_back(nums1[i]);
        }
        
        for(int i = 0; i < m; i++){
            v.push_back(nums2[i]);
        }
        sort(v.begin(), v.end());
        int t = m + n;
        int a = 0,b = 0;
        double ans;
        
        if(t%2 == 1){
            a = (double) t/2;
            ans = v[a];
        }
        else{
            a = (double)t/2;
            b = (double)(t/2) - 1;
            ans = (double)(v[a] + v[b])/2;
        }
        return ans;
        
    }
};
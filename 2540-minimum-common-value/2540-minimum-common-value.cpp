class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size();
        int m = nums2.size();
        int i = 0, j = 0;
        int res = -1;
        while(i < n && j < m ){
            
            if(nums1[i] == nums2[j]){
                res = nums1[i];
                break;
            }
            else if(nums1[i] < nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return res;
    }
};
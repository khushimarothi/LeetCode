class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int n=nums1.size();
        int m=nums2.size();
        if(n>m) swap(nums1,nums2);
        
        unordered_map<int,int> a;
        for(auto num :nums1){
            a[num]++;
        }
        int k=0;
        for(auto i:nums2){
            if(a[i]>0){
                nums1[k++]=i;
                --a[i];
            }
        }
        return vector<int>(nums1.begin(),nums1.begin()+k);
    }
};
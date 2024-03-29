class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
//         unordered_map<int, int> mp;
        
//         int a = floor(n/3)+1;
        
//         for(int i = 0; i<n;i++){
//             mp[nums[i]]++;
            
//             if(mp[nums[i]] == a){
//                 ans.push_back(nums[i]);
//             }
//         }
//         return ans;
        
        
        // optimal
        
        int  nums1 = -1, nums2 = -1, c1 =0, c2 =0;
        
        for(int i = 0; i < n; i++){
            
            if(nums[i] == nums1) c1++;
            else if(nums[i] == nums2) c2++;
            else if(c1 == 0) {
                nums1 = nums[i];
                c1 = 1;
            }
            else if(c2 == 0){
                nums2 = nums[i];
                c2 = 1;
            }
            else{
                c1--; c2--;
            }
        }
        
        c1 = 0, c2 =0;
        for(int i =0; i<n;i++){
            if(nums1 == nums[i]){
                c1++;
            }
            else if(nums2 == nums[i]){
                c2++;
            }
        }
        
        if(c1 > n/3){
            ans.push_back(nums1);
        }
        if(c2 > n/3){
            ans.push_back(nums2);
        }
        
        return ans;
    }
};
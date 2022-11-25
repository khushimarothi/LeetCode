class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
     int ans=0;
        sort(arr2.begin(),arr2.end());
        for(int i=0;i<arr1.size();i++){
            int p=lower_bound(arr2.begin(),arr2.end(),arr1[i])-arr2.begin();
            bool k=false;
            if(p<arr2.size() && abs(arr2[p]-arr1[i])<=d) k=true;
            if(p!=0 &&abs(arr2[p-1]-arr1[i])<=d) k=true;
            if(!k) ans++;
        }
        return ans;
    }
};
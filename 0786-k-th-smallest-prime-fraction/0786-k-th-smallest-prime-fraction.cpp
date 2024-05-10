class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
      
        vector<pair<double,pair<int,int>>> v;
        int n = arr.size();
        
        for(int i = 0;i < n; i++){
            for(int j = i + 1;j < n; j++){
                double num = arr[i] + 0.0;
                double den = arr[j] + 0.0;
                v.push_back({num/den,{arr[i],arr[j]}});
            }
        }
        sort(v.begin(),v.end());

        pair<double,pair<int,int>> p = v[k - 1];
        
        return {p.second.first,p.second.second};
    }
};
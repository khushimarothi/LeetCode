class Solution {
public:
    int minSetSize(vector<int>& arr) {
        vector<int>v;
        sort(arr.begin(),arr.end());
        int c=1,n=arr.size();
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]) c++;
            else{
                v.push_back(c);
                c=1;
            }
        }
        v.push_back(c);
        sort(v.begin(),v.end());
        int k=n/2,ans=0;
        for(int i=v.size()-1;k>0 && i>=0;i--){
            ans++;
            k-=v[i];
        }
        return ans;
    }
};
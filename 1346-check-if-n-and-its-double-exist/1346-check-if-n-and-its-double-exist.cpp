class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,bool>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(mp[arr[i]*2]==1 || (mp[arr[i]/2])==1 && arr[i]%2==0)
                return true;
            mp[arr[i]]=1;
        }
        return false;
    }
};
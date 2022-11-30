class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
       map<int,int> mp;
        for( int i: arr){
            mp[i]+=1;
        }
        set<int> s;
        for(auto it:mp){
            if(s.count(it.second)>0) return false;
            else s.insert(it.second);
        }
        return true;
    }
};
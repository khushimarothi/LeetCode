class Solution {
public:
    bool wordPattern(string p, string s) {
       unordered_map<char, vector<int>> m;
        
    unordered_map<string,int>mp;
        
        for(int i=0;p[i];i++) m[p[i]].push_back(i);
        
        vector<string> v;
        
        for(int i=0;i<s.size();i++){
            string a;
            while(s[i] && s[i]!=' ') a+=s[i++];
            
            v.push_back(a);
            mp[a]++;
        }
        
        if(p.size()>v.size()) return 0;
        
        for(auto i: m){
            if(v.size()<i.second.back()) return 0;
            
            int n=i.second.size();
            
            if(mp[v[i.second[0]]]!=n) return 0;
            for(int j=0;j<i.second.size(); j++) 
            {
                if(v[i.second[0]]!=v[i.second[j]]) return 0;
            }
        }
        return 1;
    }
};
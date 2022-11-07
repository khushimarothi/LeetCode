class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int child=g.size();
        int cook=s.size();
        int i=0,j=0,ans=0;
        while(i<child && j<cook){
            if(g[i]<=s[j]){
                ans++;
                i++;j++;
            }
            else if(g[i]>s[j]){
                j++;
            }
        }return ans;
       
    }
};
class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ans=0;
        int lastM=0, lastP=0,lastG=0;
        int cntM=0,cntP=0,cntG=0;
        
        vector<long long> pre(travel.size()+1);
        pre.push_back(0);
        
        for( int i=1;i<=travel.size();i++){
            pre[i]=pre[i-1]+travel[i-1];
        }
        
        for(int i=0;i<garbage.size();i++){
            string s=garbage[i];
            
            for(auto c:s){
                if(c=='M') cntM++, lastM=i;
                if(c=='P') cntP++, lastP=i;
                if(c=='G') cntG++, lastG=i;
            }
        }
        
        if(cntM) ans+=(cntM+pre[lastM]);
         if(cntP) ans+=(cntP+pre[lastP]);
         if(cntG) ans+=(cntG+pre[lastG]);
        
        return ans;
    }
};
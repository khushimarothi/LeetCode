class Solution {
public:
    string predictPartyVictory(string senate) {
        int n = senate.size();
        queue<int> r,d;
        
        for(int i=0;i<n;i++){
            if(senate[i] == 'R')
                r.push(i);
            else
                d.push(i);
        }
        if(r.size()==0){
            return "Dire";
        }
        else if(d.size()==0)
            return "Radiant";
        
        while(!r.empty() && !d.empty()){
            if(r.front()<d.front()){
                d.pop();
                int t= r.front();
                r.push(t+n);
                r.pop();
            }
            else{
                r.pop();
                int p = d.front();
                d.pop();
                d.push(p+n);
            }
        }
        return r.size()== 0 ? "Dire" : "Radiant";
    }
};
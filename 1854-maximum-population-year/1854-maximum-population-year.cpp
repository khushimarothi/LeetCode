class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int ans=-1;
        int year=0;
        for(int i=1950;i<2051;i++){
            int pop=0;
            for(int j=0;j<logs.size();j++){
                if(i>=logs[j][0] && i<logs[j][1]){
                    pop++;
                }
            }
            if(pop!=0 && ans<pop){
                ans=pop;
                year=i;
            }
        }
        return year;
    }
};
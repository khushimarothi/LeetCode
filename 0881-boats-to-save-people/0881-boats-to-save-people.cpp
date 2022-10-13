class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int i=0,n=people.size()-1;
        int res=0;
        while(i<=n){
            if(people[i]+people[n]<=limit){i++;n--;}
            else{
                n--;
            }
            res++;
        }
    return res; 
    }
};
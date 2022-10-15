class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int res=plants.size(), can=capacity;
        for(int i=0;i<plants.size();i++){
            if(can<plants[i]){
                res+=2*i;
                can=capacity;
            }
            can-=plants[i];
        }
        return res;
    }
};
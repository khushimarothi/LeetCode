class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<float> time;
        
        for(int i = 0; i<dist.size(); i++){
            float a = (float) dist[i]/speed[i];
            time.push_back(a);
        }
        
        sort(time.begin(), time.end());
        int ans= 0;
        
        for(int i = 0; i< time.size(); i++){
            
            if(time[i] <= i)
                break;
            
            ans++;
        }
        return ans;
        
    }
};
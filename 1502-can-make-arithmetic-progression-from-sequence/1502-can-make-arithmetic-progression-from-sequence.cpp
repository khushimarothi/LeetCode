class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        int diff = arr[1] - arr[0];
        
        for(int i = 2; i < arr.size(); i++){
 
            int dif = arr[i] - arr[i-1];
            
            if( dif != diff)
                return false;
        
        }
        return true;
    }
};
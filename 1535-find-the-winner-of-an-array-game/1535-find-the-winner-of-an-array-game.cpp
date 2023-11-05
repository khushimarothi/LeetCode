class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
     
        int n = arr.size();
        int maxi = *max_element(arr.begin(), arr.end());
        
        int cur = arr[0];
        int ans = 0;
        
        for(int i = 1; i < n ;i++){
            int nex = arr[i];
            
            if(cur > nex){
                ans++;
            }
            else{
                cur = nex;
                ans = 1;
            }
            
            if(ans == k || cur == maxi)
                return cur;
        }
        
        return -1;
    }
};
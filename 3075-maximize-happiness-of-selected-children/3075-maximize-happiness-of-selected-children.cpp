class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        
        long long int sum = 0;
        long long int cnt = 0;
        int n = happiness.size();
        sort(happiness.begin(), happiness.end());
        
        int i = n - 1;
        while(k > 0){
            if(happiness[i] - sum < 0){
                return cnt;
            }
            cnt += (long)happiness[i] - sum;
            k--;
            sum++;
            i--;
        }
    return cnt;
    }
};
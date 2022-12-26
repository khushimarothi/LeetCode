class Solution {
public:
    int findMinFibonacciNumbers(int k) {
        vector<int> v;
        v.push_back(0);
        v.push_back(1);
        while(v.back()<=k){
            v.push_back(v[v.size()-1] +v[v.size()-2]);
        }
        int ans=0;
        int n=v.size()-1;
        while(n>=0 && k>0){
            if(v[n]<=k){
                k-=v[n];
                ans++;
            }
            else n--;
        }
        return ans;
    }
};
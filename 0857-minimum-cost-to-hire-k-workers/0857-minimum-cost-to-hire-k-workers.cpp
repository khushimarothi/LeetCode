class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
      
        int n = quality.size();
        vector<pair<double, int>> v; 
        for(int i = 0; i < n; ++i) {
            v.push_back({double(wage[i]) / quality[i], quality[i]});
        }
        sort(v.begin(), v.end());

        priority_queue<int> pq;
        int total = 0;
        double mini = INT_MAX;
        for(auto [ratio, q] : v) {
            pq.push(q);
            total += q;
            if(pq.size() > k) {
                total -= pq.top();
                pq.pop();
            }
            if(pq.size() == k) {
                mini = min(mini, ratio * total);
            }
        }
        return mini;   
    }
};
class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        
        vector<pair<int, int>> v;
        for(int i= 0;i<nums1.size() ; i++)
            v.push_back({nums2[i], nums1[i]});
            
            sort(v.rbegin(), v.rend());
            
            long long ans = 0;
            long long cur_sum = 0;
            priority_queue<int , vector<int>, greater<int>> pq;
            
            for(int i=0;i<k-1;i++){
                cur_sum += v[i].second;
                pq.push(v[i].second);
            }
            
            for( int i=k-1; i< nums1.size();i++){
                cur_sum += v[i].second;
                pq.push(v[i].second);
                ans = max(ans, cur_sum*v[i].first);
                cur_sum -= pq.top();
                pq.pop();
            }
        
        return ans;
 }
};
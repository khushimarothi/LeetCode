class Solution {
public:
    int minPartitions(string n) {
        int m=0;
        for(auto x:n)m=max(m,(int)(x-'0'));
        return m;
    }
};
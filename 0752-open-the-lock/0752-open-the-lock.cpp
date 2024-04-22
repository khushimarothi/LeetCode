class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        
     unordered_set<string> dead(deadends.begin(), deadends.end());
     unordered_set<string> vis;
     queue<string> q;
     string start = "0000";
     
     if (dead.count(start)) 
         return -1;
     if (start == target) 
         return 0;
   
     q.push(start);
     vis.insert(start);
     int steps = 0;
    
   
     while (!q.empty()) {
        int n = q.size();
        for (int i = 0; i < n; ++i) {
            string cur = q.front();
            q.pop();
            for (int j = 0; j < 4; ++j) {
                string up = cur;
                string down = cur;
                up[j] = (up[j] == '9') ? '0' : up[j] + 1;
                
                down[j] = (down[j] == '0') ? '9' : down[j] - 1;
                if (up == target || down == target) return steps + 1;
                if (!dead.count(up) && !vis.count(up)) {
                    q.push(up);
                    vis.insert(up);
                }
                if (!dead.count(down) && !vis.count(down)) {
                    q.push(down);
                    vis.insert(down);
                }
            }
        }
        steps++;
    }
    
    return -1;
    }
};
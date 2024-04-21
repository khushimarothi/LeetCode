class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
     vector<vector<int>> graph(n);
     for (const auto& it : edges) {
        graph[it[0]].push_back(it[1]);
        graph[it[1]].push_back(it[0]);
     }

     queue<int> q;
     unordered_set<int> vis;
     q.push(source);
     vis.insert(source);

     while (!q.empty()) {
       int current = q.front();
       q.pop();
       if (current == destination)
           return true;
       for (int it : graph[current]) {
          if (vis.find(it) == vis.end()) {
              q.push(it);
              vis.insert(it);
          }
        }
      }

      
        return false;
    }
};
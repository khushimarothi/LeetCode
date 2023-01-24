class Solution {
public:
    pair<int, int> coordinate(int x, int n){
        
        int r = n-(x-1)/n-1;
        int c = (x-1)%n;
        if(r%2 == n%2){
            return {r,n-c-1};
            
        }
        return {r, c};
    }
    
    int snakesAndLadders(vector<vector<int>>& board) {
        
     int step = 0;
     queue<int> q;
        
     q.push(1);
        
      int n=board.size();
      vector<vector<bool>> visit(n, vector<bool>(n));
        
      visit[board.size()-1][0] = true;
        
      while(q.size()!=0){
          int z = q.size();
            for(int i = 0; i<z;i++){
                int x = q.front();
                if(x == n*n) return step;
                
                q.pop();
                
                for(int j=1;j<=6; j++){
                    if(j+x > n*n)
                        break;
                    
                    pair<int, int> p = coordinate(x+j, n);
                    
                    if(visit[p.first][p.second])
                    continue;
                    
                    visit[p.first][p.second] = true;
                    if(board[p.first][p.second]!= -1)
                        q.push(board[p.first][p.second]);
                    else 
                        q.push(j+x);
                    
                }
            }
          step++;
      }
        return -1;
        
    }
};
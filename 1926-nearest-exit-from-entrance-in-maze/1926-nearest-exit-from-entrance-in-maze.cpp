class Solution {
    
public:
    bool check_in(int x,int y,int m, int n){
        if(x>=0 && x<m && y>=0 &&y<n){
            return true;
        }
        return false;
    }
    
    bool check_out(int x,int y,int m, int n){
        if(x==0 || y==0 ||x==m-1 || y==n-1){
            return true;
        }
        return false;
    }
    
    
    int bfs(vector<vector<char>>& maze, vector<int>& entrance){
        vector<int> u={-1,1,0,0};
        vector<int> v={0,0,-1,1};
        
        int m=maze.size();
        int n=maze[0].size();
        
        
        vector<vector<int>> distance(m,vector<int>(n,-1));
        queue<pair<int,int>> q;
        int x=entrance[0];
        
        int y=entrance[1];
        q.push({x,y});
        distance[x][y]=0;
        
        while(!q.empty()){
            auto temp=q.front();
            q.pop();
            int r=temp.first;
            int c=temp.second;
            
            if(distance[r][c]!=0){
                if(check_out(r,c,m,n)){
                    return distance[r][c];
                }
            }
            
            for(auto k=0;k<u.size();k++){
                int tempx=r+u[k];
                int tempy=c+v[k];
                
                if(check_in(tempx,tempy,m,n) && maze[tempx][tempy]=='.' && distance[tempx][tempy]==-1){
                    q.push({tempx,tempy});
                    distance[tempx][tempy]=distance[r][c]+1;
                    
                    
                }
            }
         
        }
       return -1;    
    }
    
    
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        return bfs(maze,entrance);
    }
};
class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        
        priority_queue<int,vector<int>,greater<int>> q;
        
        if(n == 1)
        {
            return 0;
        }
        
        int rem = bricks;
        int i;
        for(i = 0 ;i < n - 1;i++)
        {
            int tmp = heights[i+1] - heights[i];
            if(tmp <= 0)
            {
                continue;
            }
            
            else
            {
                q.push(tmp);
                if(q.size() > ladders)
                {
                    rem -= q.top();
                    q.pop();
                }
                if(rem < 0)
                {
                    return i;
                }
            }
        }
        return i;
        
    }
};
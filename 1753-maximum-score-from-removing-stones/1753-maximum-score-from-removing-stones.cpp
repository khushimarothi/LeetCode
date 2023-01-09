class Solution {
public:
    int maximumScore(int a, int b, int c) {
       int ans=0;
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        
        while(pq.size()>1){
            int temp= pq.top();
            pq.pop();
            int temp1 =pq.top();
            pq.pop();
            
            temp--; temp1--;
            
            if(temp!=0)
            pq.push(temp);
            
            if(temp1!=0)
            pq.push(temp1);
            
            ans++;
        }
        return ans;
    }
};
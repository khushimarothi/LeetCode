class Solution {

public:
    int shipWithinDays(vector<int>& weights, int days) {
              int left=0,right=0;
        for(int w: weights){
            left=max(left,w);
            right+=w;
        }
        while(left<right){
            int mid=(left+right)/2, require=1, now=0;
            for(int w:weights){
                if(now+w>mid){
                    require+=1;
                    now=0;
                }
                now+=w;
            }
            if(require>days)left=mid+1;
            else right=mid;
        }
        return left;
    }
};
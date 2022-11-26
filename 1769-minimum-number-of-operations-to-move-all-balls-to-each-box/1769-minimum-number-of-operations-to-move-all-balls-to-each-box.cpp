class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        vector<int> res(n);
        int behind=0, ahead=0;
        for(int i=0;i<n;i++){
            if(boxes[i]=='1'){
                ahead++;
                res[0]+=i;
            }
        }
        if(boxes[0]=='1'){
            ahead--;
            behind++;
        }
        for(int i=1;i<n;i++){
            res[i]+=res[i-1]-ahead+behind;
            if(boxes[i]=='1'){
                ahead--;
                behind++;
            }
        }
        return res;
    }
};
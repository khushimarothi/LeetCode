class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
      sort(deck.begin(),deck.end());
        int n=deck.size();
        queue<int> k;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            k.push(i);
        }
        int t;
        for(int i=0;i<n;i++){
            t=k.front();
            k.pop();
            ans[t]=deck[i];
            t=k.front();
            k.pop();
            k.push(t);
        }
        return ans;
    }
};
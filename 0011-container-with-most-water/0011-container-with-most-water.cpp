class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size()-1;
        int i=0, maxi=INT_MIN;
        while(i<n){
            int water=(n-i)*min(height[i],height[n]);
            maxi=max(maxi,water);
            if(height[i]<height[n]) i++;
            else n--;
            
        }
    return maxi;
    }
};
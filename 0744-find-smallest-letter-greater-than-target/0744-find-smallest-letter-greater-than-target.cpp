class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n=letters.size();
        if(target>= letters[n-1]) return letters[0];
        
        int l=0,h=n-1;
        int ans=-1;
        while(l<=h){
            int mid=(l+h)/2;
            
            if(letters[mid]>target){
                h=mid-1;
                ans=mid;
            }
            else{
                l=mid+1;
            }
        }
        return letters[ans];
    }
};
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
      int l=1,h=n;
        while(l<=h){
            int pick=l+(h-l)/2;
            if(guess(pick)==0){
                return pick;
            }
            else if(guess(pick)==1){
                l=pick+1;
            }
            else{
                h=pick-1;
            }
        }
        return -1;
    }
};
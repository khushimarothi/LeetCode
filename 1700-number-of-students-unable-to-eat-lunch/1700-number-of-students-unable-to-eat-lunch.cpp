class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
    
        int n = students.size();
        int round = 0, square = 0;
        
        for(int it: students){
            if(it == 0){
                round++;
            }
            else
                square++;
        }
        
        for(int it: sandwiches){
            if(it == 0){
                if(round > 0){
                    round--;
                }
                else
                    break;
            }
            else{
                if(square > 0){
                    square--;
                }
                else
                    break;
            }
        }
        
        return round + square;

    }
};
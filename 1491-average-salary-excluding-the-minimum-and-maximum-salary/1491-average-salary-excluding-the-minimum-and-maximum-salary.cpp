class Solution {
public:
    double average(vector<int>& salary) {
        double mini = *min_element(salary.begin(),salary.end());
        double maxi = *max_element(salary.begin(),salary.end());
        
        double sum= (mini+maxi);
        
        double avg=0; int n=salary.size();
        
        for(int i=0;i<n;i++){
            avg+=salary[i];
        }
        
        double ans=(avg-sum)/(n-2);
        
        return ans;
    }
};
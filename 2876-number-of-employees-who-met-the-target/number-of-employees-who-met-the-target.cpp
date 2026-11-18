class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
       int c{};
        for(int i{}; i<hours.size(); i++){
            if(hours[i]>=target){
                c++;
            }
        }
        return c;
    }
};
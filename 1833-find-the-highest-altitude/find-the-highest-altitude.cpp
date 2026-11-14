class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        int sum =0;
        int currentsum{};
        for(int i{0}; i<n; i++){
             currentsum+=gain[i];
             if(currentsum>sum){
                sum=currentsum;
             }
        }
        return sum;
    }
};
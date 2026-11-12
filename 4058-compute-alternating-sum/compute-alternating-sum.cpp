class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int sum{};
        for(int i{}; i<nums.size() ; i++){
            if(i%2==0){
                sum=sum+nums[i];
            }
            else{
                sum=sum-nums[i];
            }
        }
        return sum;
    }
};
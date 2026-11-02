class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result{};
        for(int i{}  ;i<nums.size(); i++){
              result=result ^ nums[i];
        }
        return result;
    }
};
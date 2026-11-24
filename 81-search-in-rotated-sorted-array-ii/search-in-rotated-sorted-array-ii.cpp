class Solution {
public:
    bool search(vector<int>& nums, int target) {
    for(int i{}; i<nums.size(); i++){
        if(nums[i]==target){
            return true;
        }
    }
    return false;
    }
};
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start{};
        int high=nums.size()-1;
     for(int i{}; i<=high; i++){
        if(nums[i]==target){
            return i;
        }
     }
        return -1;
    }
};
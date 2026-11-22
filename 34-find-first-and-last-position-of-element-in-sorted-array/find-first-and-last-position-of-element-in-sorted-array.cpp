class Solution {
public:

    vector<int> searchRange(vector<int>& nums, int target) {
     return {firstnum(nums,target),lastnum(nums,target)};
    }

    int firstnum(vector<int>&nums, int target){
       int l=nums.size();
        int low=0, high=l-1;
        int i{-1};
        while(low<=high){
         int   mid=low+(high-low)/2;
            if(nums[mid]==target){
                i=mid;
                high=mid-1;
             }
            else if(nums[mid]>target){
                high =mid-1;
            }
            else
            low=mid+1;
        }
        return i;
    }
    int lastnum(vector<int>&nums, int target){
         int l=nums.size();
        int low=0, high=l-1;
        int i{-1};
         while(low<=high){
         int   mid=low+(high-low)/2;
            if(nums[mid]==target){
                i=mid;
                low=mid+1;
             }
            else if(nums[mid]>target){
                high =mid-1;
            }
            else
            low=mid+1;
        }
        return i;
    }
       
};
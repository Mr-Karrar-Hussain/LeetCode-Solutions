class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=nums.size(),k=0;
       for(int i=0; i<l;  i++){
         for(int j=0; j<l; j++){
            if(nums[i]+nums[j]==target && i!=j){
               return {i,j};
            }
         } 
      
    }
     return {-1,-1};
    }
    
};
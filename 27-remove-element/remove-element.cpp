class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=nums.size(),c=0;
      for(int i{} ; i<l ; i++){
        if(nums[i]!=val){
            nums[c]=nums[i];
             c++;
        }
      }  
      return c;
    }
};
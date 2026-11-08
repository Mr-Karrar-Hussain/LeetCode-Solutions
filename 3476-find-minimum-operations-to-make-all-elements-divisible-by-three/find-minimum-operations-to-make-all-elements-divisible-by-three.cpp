class Solution {
public:
    int minimumOperations(vector<int>& nums) {
               int L{0};
 for(int i{} ; i<nums.size() ;i++ ){
     if(nums[i]%3!=0){
        L++; 
     }
 }
     return L;
    }
    
};
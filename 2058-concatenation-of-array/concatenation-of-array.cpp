class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
      const  int n=2*nums.size();
        vector<int> ans(n);
        int j{};
        for(int i{}; i<n; i++){
            if(i<nums.size()){
            ans[i]=nums[i];
            }
            else{
                ans[i]=nums[j++];

            }
        }
        return ans;
    }
};
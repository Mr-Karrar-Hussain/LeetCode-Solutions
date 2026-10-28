class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0){
        return false;
      }
        long long palindrome{};
        int temp=x;
        while(x>0){
       int  mod = x%10;
         palindrome=(palindrome*10)+mod;
         x=x/10;
        }
        if(temp==palindrome){
            return true;
        }
        else{
            return false;
        }

    }
};
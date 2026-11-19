class Solution {
public:
    int countDigits(int num) {
        int x=num;
        int count{};
        while(x>=1){
            int r=x%10;
            if(num%r==0){
                count++; }           
             x=x/10;
          }
  
  return count;
    }
};

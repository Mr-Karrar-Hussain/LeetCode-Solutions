class Solution {
public:
    bool canAliceWin(int n) {
        int num=10;
        int count{};
        if(n<10){
            return false;
        }
        while(n>=1){
         n-=num;
         num--;
         if(n>=0){
        count++;
         }
        }
        if(count%2!=0){
            return true;
        }
        return false;
    }
};
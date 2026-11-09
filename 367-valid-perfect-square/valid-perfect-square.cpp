class Solution {
public:
    bool isPerfectSquare(int num) {
        long long result{};
        for(long long i{1};  result<num ; i++){
            result=i*i;
        }
        if(result==num)   return true;
        return false;
    }
};
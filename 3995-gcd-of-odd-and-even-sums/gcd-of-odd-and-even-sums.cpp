class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum1{}, sum2{};
          sum1=n*n;
          sum2=n*(n-1);
           return gcd(sum1,sum2); 
    }
};
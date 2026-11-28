class Solution {
public:
    double myPow(double x, long long n) {
      if(n==0){
        return 1;
      }
       
   if(n<0){
   long long  m=abs(n);
    double result=pow(x,m);
    return 1/result;
   }
   double result1=pow(x,n);
   return result1;
    }
};

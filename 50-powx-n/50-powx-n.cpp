class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        
        if(n>0)
        {
        double power=myPow(x,n/2);
        double ans=power*power;
          if(n&1) return ans*x;
            else return ans;
        }
         else
         {
        int num=abs(n);
        double power=myPow(x,num/2);
        double ans=power*power;
           if(num&1) return 1/(ans*x);
             else return 1/ans;
         }
    }
};
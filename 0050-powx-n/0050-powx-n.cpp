class Solution {
public:
    double myPow(double x, long int n) {
        if(n==0) return 1;
        else if(n>0){
            double y=myPow(x,n/2);
            if(n&1) return x*y*y;
            else return y*y;
        }else{
            double y=myPow(x,-n/2);
            if(n&1) return 1/(x*y*y);
            else return 1/(y*y);
        }
    }
};
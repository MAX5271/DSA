class Solution {
public:
    const int mod=1e9+7;
    int power(long long int n,long long int x){
        if(x==0){
            return 1;
        }else if(x&1) {
            int y=power(n,x/2);
            return (n*((long long)y*y))%mod;
        }else{
            int y=power(n,x/2);
            return ((long long)y*y)%mod;
        }
    }
    int countGoodNumbers(long long n) {
        if(n==1) return 5;
        else if(n&1){
            return (5*((long long)power(5,n/2)*power(4,n/2)))%mod;
        }else return ((long long)power(5,n/2)*power(4,n/2))%mod;
    }
};
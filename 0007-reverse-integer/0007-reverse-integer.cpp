class Solution {
public:
    int reverse(int x) {
        int sum=0;
        while(x)
        {
            if(sum<(-pow(2,31))/10 || sum>(pow(2,31)-1)/10 )
            return 0;
            sum=sum*10+x%10;
            x/=10;
        }
        return sum;
    }
};
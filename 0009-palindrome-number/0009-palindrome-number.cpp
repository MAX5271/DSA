class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int num=0,x1=x;
        while(x)
        {
            if(num<(-pow(2,31))/10 || num>(pow(2,31)-1)/10 )
            return false;
            num=num*10+x%10;
            x/=10;
        }
        if(num==x1) return true;
        else return false;
    }
};
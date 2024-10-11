class Solution {
public:
    int myAtoi(string s) {
        int i = 0, num = 0, sign = 1;

        while (s[i] == ' ') {
            i++;
        }
        if(s[i]=='-') {sign=0;i++;}
        else if(s[i]=='+'){
            sign=1;
            i++;
        }
        
        for (; i < s.length() && s[i] >= '0' && s[i] <= '9'; i++) {
            if ((long long)num * 10 - (long long)(s[i] - '0')<= INT_MIN)
                return INT_MIN;
            else if ((long long)num * 10 + (long long)(s[i] - '0')>= INT_MAX)
                return INT_MAX;
            if (sign) {
                num = num * 10 + (int)(s[i] - '0');
            } else
                num = num * 10 - (int)(s[i] - '0');
        }
        return num;
    }
};
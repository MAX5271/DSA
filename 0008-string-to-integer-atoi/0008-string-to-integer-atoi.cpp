class Solution {
public:
    int myAtoi(string s) {
        if(s==""||s[0]!=' '&&s[0]!='-'&&s[0]!='+'&&(s[0]<'0'&&s[0]>'9')) return 0;
        int i=0;
        while(s[i]==' ') i++;
        
        int sign=0;
        if(s[i]=='-'){
            sign=-1;
            i++;
        }else if(s[i]=='+'){
            i++;
        }
        int len=0;
        while(i+len<s.length()&&s[i+len]>='0'&&s[i+len]<='9') len++;
        if(len==0) return 0;
        s=s.substr(i,len);
        int num=myAtoi(s.substr(0,s.length()-1));
        if(sign==0){
        if((long)num*10+(int)(s[s.length()-1]-'0')>=INT_MAX) num = INT_MAX;
        else num=num*10+(int)(s[s.length()-1]-'0');}
        else{
            if((long)num*10+(int)(s[s.length()-1]-'0')>=(long)INT_MAX+1) return INT_MIN;
            else num=num*10+(int)(s[s.length()-1]-'0');
        }
        return (sign==0)?num:-1*num;
    }
};
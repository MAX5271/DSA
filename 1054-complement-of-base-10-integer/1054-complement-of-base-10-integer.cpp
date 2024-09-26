class Solution {
public:
    int bitwiseComplement(int n) {
        vector <char> s;
        if(n==0) return 1;
        while (n)
        {
            if(n%2) s.push_back('1');
            else s.push_back('0');
            n/=2;
        }
        // reverse(s.begin(),s.end());

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1') s[i]='0';
            else s[i]='1';
        }
        n=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1') n+=pow(2,i);
        }
        return n;
    }
};
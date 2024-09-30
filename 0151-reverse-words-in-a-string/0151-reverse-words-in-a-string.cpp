class Solution {
public:
    
    string reverseWords(string s) {
        // trim(s);
        string s1="",s2="";
        if(s.back()!=' ') s.push_back(' ');
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ') s1.push_back(s[i]);
            if(s[i]==' '&&s1!=""){
                if(s2=="")
                s2=s1;
                else
                s2 = s1+" "+s2;
                s1="";
            }
            if(i==s.length()-1&&s1!="") s2=s1+" "+s2;
        }
        // s2=trimm(s2);
        return s2;
    }
};
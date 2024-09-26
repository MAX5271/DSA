class Solution {
public:
    int minOperations(string s) {
        
        int i,c1=0,c2=0,n=s.length();
        string s1,s2;
        for(i=0;i<n;i++){
            if(i%2==0)
            s1+='1';
            else s1+='0';
            if(i%2==0)
            s2+='0';
            else s2+='1';
        }
        for(i=0;i<n;i++){
          if(s.at(i)!=s1.at(i))
          c1++;
          else if(s.at(i)!=s2.at(i))
          c2++;
        }
       if(c1<c2)
       return c1;
       else return c2;
            }
};
class Solution {
public:
    int numberOfSubstrings(string s) {
        int total = ((s.length())*(s.length()+1))/2;
        int a=0,b=0,c=0,start=0,end=0,count=0;
        while(end<s.length()){
            if(s[end]=='a') a++;
            else if(s[end]=='b') b++;
            else c++;
            while(a!=0&&b!=0&&c!=0){
                if(s[start]=='a') a--;
                else if(s[start]=='b') b--;
                else c--;
                start++;
            }
            count+=end-start+1;
            end++;
        }
        return (total - count);
    }
};
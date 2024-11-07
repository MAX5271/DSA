class Solution {
public:
    int characterReplacement(string s, int k) {
        int count=1;
        for(char a='A';a<='Z';a++){
            int start=0,end=0,c=0,n=k;
            while(end<s.size()){
                if(s[end]!=a){
                    c++;
                }
                while(c>k){
                    if(s[start]!=a) c--;
                    start++;
                }
                count=max(count,end-start+1);
                end++;
            }
        }
        return count;
    }
};
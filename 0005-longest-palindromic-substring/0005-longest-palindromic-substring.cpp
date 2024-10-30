class Solution {
public:
    string longestPalindrome(string s) {
        int lo=0,start,end;
        for(int i=0;i<s.size();i++){
            for(int j=0;i-j>=0&&i+j<s.length();j++){
                if(s[i-j]==s[i+j]){
                    if(2*j+1>lo){
                        lo=2*j+1;
                        start=i-j;
                        end=i+j;
                    }
                }
                else break;
            }
        }

        for(int i=0;i<s.size();i++){
            for(int j=0;i-j>=0&&i+j+1<s.length();j++){
                if(s[i-j]==s[i+j+1]){
                    if(2*(j+1)>lo){
                        lo=2*(j+1);
                        start=i-j;
                        end=i+j+1;
                    }
                }
                else break;
            }
        }

        string sub="";
        
        for(int i=start;i<=end;i++) sub.push_back(s[i]);
        return sub;
    }
};
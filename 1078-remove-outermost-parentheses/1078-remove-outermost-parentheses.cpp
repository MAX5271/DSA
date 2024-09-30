class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string s1="";
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') {
                
                if(count!=0)
                s1.push_back('(');
                count++;
                }
            else if(s[i]==')'&&count==1){
                count--;
            }
            else{
                s1.push_back(')');
                count--;
            }
        }
        return s1;
    }
};
class Solution {
public:
    int maxDepth(string s) {
        int count=0,m=-1;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(') count++;
            else if(s[i]==')') count--;
            m=max(count,m);
        }
        return m;

    }
};
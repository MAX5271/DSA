class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()) return false;
        for(int i=0;i<s.length();i++)
        {
            int count = 0;
            for(int j=0;j<s.length();j++){
                if((s[(i+j)%s.length()])==goal[j]) count++;
            }
            if(count==s.length()) return true;
        }
        return false;

    }
};
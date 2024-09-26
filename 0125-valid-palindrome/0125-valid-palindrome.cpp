class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=97&&s[i]<=122) s1.push_back(s[i]);
            else if(s[i]>=65&&s[i]<=90) s1.push_back((s[i]+32));
            else if(s[i]>=48&&s[i]<=57) s1.push_back(s[i]);
        }

        for(int i=0;i<s1.length()/2;i++)
        {
            if(s1[i]!=s1[s1.length()-1-i]) return false;
        }

        return true;

    }
};
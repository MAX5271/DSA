class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> s1(26,0),t1(26,0);

        for(int i=0;i<s.length();i++){
            s1[(int)(s[i]-97)]++;
        }
        for(int i=0;i<t.length();i++){
            t1[(int)(t[i]-97)]++;
        }
        for(int i=0;i<26;i++){
            if(s1[i]!=t1[i]) return false;
        }
        return true;
    }
};
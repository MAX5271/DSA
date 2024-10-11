class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char> a;
        unordered_set<char> n,m;
        for(auto element:s) n.insert(element);
        for(auto element:t) m.insert(element);
        if(m.size()!=n.size()) return false;
        for(int i=0;i<s.length();i++){
            a[s[i]]=t[i];
        }
        string s1="";
        for(int i=0;i<s.length();i++){
            s1.push_back(a[s[i]]);
        }
        if(s1==t) return true;
        else return false;
    }
};
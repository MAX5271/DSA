class Solution {
public:
    string minWindow(string s, string t) {
        if (t == s)
            return s;
        int start = 0, end = 0, i1 = 0, i2 = 0, length = INT_MAX;
        unordered_map<char, int> f;
        for (int i = 0; i < t.length(); i++) {
            f[t[i]]++;
        }
        int count = 0;
        while (end < s.length()) {
            if (f[s[end]] > 0) {
                count++;
            }
            f[s[end]]--;
            while (count == t.length()) {
                if (end - start + 1 < length) {
                    length = end - start + 1;
                    i1 = start;
                    i2 = end;
                }
                f[s[start]]++;
                if (f[s[start]] > 0)
                    count--;
                start++;
            }
            end++;
        }

        string ans;
        for (int i = i1; i <= i2; i++) {
            ans.push_back(s[i]);
        }
        return (length==INT_MAX)?"":ans;
    }
};
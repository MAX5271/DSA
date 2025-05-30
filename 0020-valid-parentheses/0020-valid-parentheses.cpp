class Solution {
public:
    bool cal(string& s, int i, stack<char>& v) {
        if (i == s.length())
            return true;
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            v.push(s[i]);
            return true && cal(s, i + 1, v);
        } else {
            if (v.empty())
                return false;
            if (v.top() == '(' && s[i] == ')' ||
                v.top() == '{' && s[i] == '}' ||
                v.top() == '[' && s[i] == ']') {
                v.pop();
                return true && cal(s, i + 1, v);
            } else
                return false;
        }
    }

    bool isValid(string s) {
        stack<char> v;
        return cal(s, 0, v) && v.empty();
    }
};
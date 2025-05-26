class Solution {
public:
    vector<string> ans;
    vector<pair<char, string>> pos = {
        {'2', {'a', 'b', 'c'}}, {'3', {'d', 'e', 'f'}},
        {'4', {'g', 'h', 'i'}}, {'5', {'j', 'k', 'l'}},
        {'6', {'m', 'n', 'o'}}, {'7', {'p', 'q', 'r', 's'}},
        {'8', {'t', 'u', 'v'}}, {'9', {'w', 'x', 'y', 'z'}}};
    string s;

    void cal(int i, string& str) {
        if (i == s.size()) {
            ans.push_back(str);
            return;
        }
        int n = (int)(s[i] - '2');
        for (int j = 0; j < pos[n].second.size(); j++) {
            str.push_back(pos[n].second[j]);
            cal(i + 1, str);
            str.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return ans;
        s=digits;
        string start;
        cal(0,start);
        return ans;
    }
};
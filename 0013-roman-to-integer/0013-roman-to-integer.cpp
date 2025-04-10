class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == 'I') {
                if (i != s.length() - 1) {
                    if (s[i + 1] == 'V') {
                        num += 4;
                        i++;
                    } else if (s[i + 1] == 'X') {
                        num += 9;
                        i++;
                    } else
                        num++;
                } else
                    num++;
            } else if (s[i] == 'V')
                num += 5;

            else if (s[i] == 'X') {
                if (i != s.length() - 1) {
                    if (s[i + 1] == 'L') {
                        num += 40;
                        i++;
                    } else if (s[i + 1] == 'C') {
                        num += 90;
                        i++;
                    } else
                        num += 10;
                } else
                    num += 10;
            } else if (s[i] == 'L')
                num += 50;
            else if (s[i] == 'C') {
                if (i != s.length() - 1) {
                    if (s[i + 1] == 'D') {
                        num += 400;
                        i++;
                    } else if (s[i + 1] == 'M') {
                        num += 900;
                        i++;
                    } else
                        num += 100;
                } else
                    num += 100;
            } else if (s[i] == 'D')
                num += 500;
            else
                num += 1000;
        }
        return num;
    }
};
class Solution {
public:
    string compressedString(string word) {
        int count = 0;
        char ch = word[0];
        string s;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch)
                count++;
            if (count == 9 || word[i] != ch) {
                if(count!=0){
                s.push_back((char)(count + '0'));
                s.push_back(ch);
                }
                if(ch==word[i])
                count = 0;
                else count=1;
                ch=word[i];
            }
        }if(count!=0){
                s.push_back((char)(count + '0'));
                s.push_back(ch);
                }
        return s;
    }
};
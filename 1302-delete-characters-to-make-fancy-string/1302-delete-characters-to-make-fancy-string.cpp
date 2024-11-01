class Solution {
public:
    string makeFancyString(string s) {
        char a=s[0];
        int count=0;
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]==a) count++;
            else{
                count=1;
                a=s[i];
            }
            if(count<3){
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int siz=201;
        for(int i=0;i<strs.size();i++){
            if(siz>strs[i].size()){
                siz=strs[i].size();
            }
        }
        string s="";
        for(int i=0;i<siz;i++){
            char ch=strs[0][i];
            bool flag = true;
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=ch){
                    flag = false;
                    break;
                }
            }
            if(flag){
                s.push_back(ch);
            }
            else break;
        }
        return s;
    }
};
class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words,
                                         vector<int>& groups) {
        vector<string> a1,a2;
        for(int i=0;i<words.size();i++){
            if(groups[i]==a1.size()%2){
                a1.push_back(words[i]);
            }
            if(groups[i]!=a2.size()%2){
                a2.push_back(words[i]);
            }
        }
        return (a1.size()>a2.size())? a1:a2;
    }
};
class Solution {
public:
    bool isCircularSentence(string sentence) {
       for(int i=0;i<sentence.length()-1;i++){
        if(sentence[i]==' '){
            if(sentence[i-1]!=sentence[i+1]) return false;
        }
       }
       return (sentence.back()==sentence[0]);
    }
};
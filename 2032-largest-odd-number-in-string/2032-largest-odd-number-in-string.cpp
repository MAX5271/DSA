class Solution {
public:
    string largestOddNumber(string num) {
        int index=-1;
        for(int i=num.length()-1;i>-1;i--){
            if((num[i]-48)%2){
                index=i;
                break;
            }
        }
        return (index!=-1)?num.substr(0,index+1):"";
    }
};
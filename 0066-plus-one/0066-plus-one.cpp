class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        

        if(digits[digits.size()-1]!=9)
        {
            digits[digits.size()-1]+=1;
            
        }
        else
        {
           int i;
           for(i=digits.size()-1;i>=0;i--)
           {
            if(digits[i]==9) digits[i]=0;
            else break;
           }
           if(i==-1)
           {
            digits.push_back(0);
            digits[0]=1;
           }
           else digits[i]+=1;

        }
        return digits;
    }
};
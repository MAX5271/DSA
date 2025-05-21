class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==1){
            return 0;
        }
        int num=kthGrammar(n-1,(k+1)/2);
        if(num==1){
            if(k&1) return 1;
            else return 0;
        }else{
            if(k&1) return 0;
            else return 1;
        }
    }
};
class Solution {
public:
    int kthGrammar(int n, int k) {
        bitset<32> bits=(k-1);
        int start=0;
        for(int i=0;i<n-1;i++){
            if(bits[n-i-2]==1){
                if(start==0) start=1;
                else start=0;
            }
        }
        return start;
    }
};
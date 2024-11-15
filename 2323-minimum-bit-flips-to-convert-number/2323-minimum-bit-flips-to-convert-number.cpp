class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        bitset<32> n1(start),n2(goal);
        for(int i=0;i<32;i++)
        if(n1[i]!=n2[i]) count++;

        return count;
    }
};
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans=numBottles,e=0;
        while(numBottles+e>=numExchange){
            int x=e;
            e=(e+numBottles)/numExchange;
            numBottles=(x+numBottles)%numExchange;
            ans+=e;
        }
        return ans;
    }
};
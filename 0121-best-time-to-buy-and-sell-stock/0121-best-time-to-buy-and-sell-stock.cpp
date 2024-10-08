class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=INT_MAX,profit=0;
        for(int i=0;i<prices.size();i++)
        {
            m=min(m,prices[i]);
            profit=max(profit,prices[i]-m);
        }
        return profit;
    }
};
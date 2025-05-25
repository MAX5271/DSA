class Solution {
public:
    int dp[310][5010];

    int func(int ind, vector<int>& a, int amount) {
        if (amount == 0)
            return 1;
        if (ind < 0)
            return 0;
        if (dp[ind][amount] != -1)
            return dp[ind][amount];

        int ways = 0;

        for (int coin_amount = 0; coin_amount <= amount;
             coin_amount += a[ind]) {
            ways += func(ind - 1, a, amount - coin_amount);
        }
        return dp[ind][amount] = ways;
    }

    int change(int amount, vector<int>& coins) {
        memset(dp, -1, sizeof(dp));
        return func(coins.size() - 1, coins, amount);
    }
};
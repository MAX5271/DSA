class Solution {
public:
    int dp[205][20005];

    int func(vector<int>& a, int val, int i) {
        if (val <= 0)
            return 0;
        if (i < 0)
            return 1e5;
        if (dp[i][val] != -1)
            return dp[i][val];
        int ans = func(a, val, i - 1);
        if (val - a[i] >= 0)
            ans = min(ans, func(a, val - a[i], i - 1));
        return dp[i][val] = ans;
    }

    bool canPartition(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if (sum & 1) {
            return false;
        }
        if (0 == func(nums, sum / 2, nums.size() - 1))
            return true;
        else
            return false;
    }
};
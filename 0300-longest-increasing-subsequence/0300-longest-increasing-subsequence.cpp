class Solution {
public:
    int dp[2510];
    int lis(int i, vector<int>& a) {
        if (dp[i] != -1)
        return dp[i];
        int ans=1;
            for (int j = 0; j < i; j++) {
                if (a[i] > a[j]) {
                    ans= max(ans, lis(j,a) + 1);
                }
            }
        return dp[i]=ans;
    }
    int lengthOfLIS(vector<int>& nums) {
        fill(dp,dp+2510,-1);
        int ans = -1;
        for (int i = 0; i < nums.size(); i++) {
            ans = max(ans, lis(i, nums));
        }
        return ans;
    }
};
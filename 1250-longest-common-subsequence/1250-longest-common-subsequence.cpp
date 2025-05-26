class Solution {
public:
    string s, t;
    int dp[1005][1005];
    int func(int i, int j) {
        if (i < 0)
            return 0;
        if (j < 0)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        int c1 = func(i - 1, j), c2 = func(i, j - 1),
            c3 = func(i - 1, j - 1) + (s[i] == t[j]);
        return dp[i][j] = max(c1, max(c2, c3));
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp, -1, sizeof(dp));
        s = text1;
        t = text2;
        return func(s.size() - 1, t.size() - 1);
    }
};
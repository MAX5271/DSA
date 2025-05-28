class Solution {
public:

    int dp[1010];

int minc(vector<int>& cost,int i) {
    if(i+1>=cost.size()||i+2==cost.size()) return 0;

    if(i>=0&&dp[i]!=-1) return dp[i];
    int ans = minc(cost,i+1) + cost[i+1];
    if(i+2<cost.size())
    ans=min(ans,minc(cost,i+2)+cost[i+2]);
    if(i>=0)
    return dp[i]=ans;
    else return ans;
}


    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        return minc(cost,-1);
    }
};
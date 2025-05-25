class Solution {
public:
    int dp[10010];
    int func(vector<int>& a,int amount){
        if(amount<0) return -1;
        if(amount==0) return 0;
        if(dp[amount]!=-2) return dp[amount];
        int ans = INT_MAX;
        for(int i=0;i<a.size();i++){

            int val=func(a,amount-a[i]);
            if(val!=-1) ans=min(ans,val+1);
        }
        if(ans==INT_MAX) return dp[amount]=-1;
        return dp[amount]=ans;
    }   
    int coinChange(vector<int>& coins, int amount) {
        fill(dp,dp+10010,-2);
        dp[0]=0;
        for(int i=0;i<coins.size();i++) if(coins[i]<10002) dp[coins[i]]=1;
        return func(coins,amount);
    }
};
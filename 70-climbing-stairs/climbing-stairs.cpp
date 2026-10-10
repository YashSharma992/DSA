class Solution {
public:
    int path(int n,vector<int>&dp){
        if (n <= 1)
        return 1;
        if(dp[n]!=-1)
        return dp[n];
        dp[n]=path(n-1,dp)+path(n-2,dp);
        return dp[n];
    }
    int climbStairs(int n) {
        // if(n<=2)
        // return n;
        // int a=0,b=1;
        // int ans;
        // for(int i=0;i<n;i++){
        //     ans=a+b;
        //     a=b;
        //     b=ans;
        // }
        // return ans;

        // if(n==0||n==1)
        // return 1;
        // return climbStairs(n-1)+climbStairs(n-2);


        vector<int>dp(n+1,-1);
        return path(n,dp);
    }
};
class Solution {
public:
    // int fact(int n,vector<long long>&dp){
    //     for(int i=2;i<=n;i++){
    //         dp[i]=dp[i-1]*i;
    //     }
    //     return dp[n];
    // }

    int trailingZeroes(int n) {
        int cnt = 0;

        while (n >= 5) {
            n /= 5;
            cnt += n;
        }

        return cnt;



        // if(n==0)
        // return 0;
        // vector<long long>dp(n+1);
        // dp[0]=1;
        // dp[1]=1;
        // long long factorial=fact(n,dp);
        // int ans=0;
        // while(factorial%10==0){
        //     ans++;
        //     factorial/=10;
        // }
        // return ans;
    }
};
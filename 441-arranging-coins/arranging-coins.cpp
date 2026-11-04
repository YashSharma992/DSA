class Solution {
public:
    int arrangeCoins(int n) {
        return (int)((sqrt(1+8.0*n)-1)/2);


        // long long sum=0;
        // for(int i=1;i<=n;i++){
        //     sum+=i;
        //     if(sum>n)
        //     return i-1;
        // }
        // return 1;
    }
};
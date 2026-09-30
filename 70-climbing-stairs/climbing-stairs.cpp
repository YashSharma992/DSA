class Solution {
public:
    int climbStairs(int n) {
        if(n<=2)
        return n;
        int a=0,b=1;
        int ans;
        for(int i=0;i<n;i++){
            ans=a+b;
            a=b;
            b=ans;
        }
        return ans;
    }
};
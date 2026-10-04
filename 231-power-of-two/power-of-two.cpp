class Solution {
public:
    bool isPowerOfTwo(int n) {
        //return (n>0)&&((n&(n-1))==0);

        //return (n>0)&&(__builtin_popcount(n)==1);

        //return (n>0)&&((__builtin_clz(n)+__builtin_ctz(n))==31);

        //return (n>0)&&((__builtin_ffs(n)+__builtin_clz(n))==32);

        if(n<=0)
        return false;
        int ans=log2(n);
        double temp=log2(n);
        return ans==temp;
    }
};
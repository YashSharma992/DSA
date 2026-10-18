class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<1)
        return false;
        while(!(n&3)){
            n>>=2;
        }
        return n==1;


        // return (__builtin_popcount(n)==1)&&((__builtin_ctz(n)&1)==0);
    }
};
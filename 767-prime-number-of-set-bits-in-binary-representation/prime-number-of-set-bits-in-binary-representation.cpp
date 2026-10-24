class Solution {
public:
    bool isprime(int n){
        if(n<2)
        return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0)
            return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int cnt=0;
        for(int i=left;i<=right;i++){
            if(isprime(__builtin_popcount(i))){
                cnt++;
            }
        }
        return cnt;
    }
};
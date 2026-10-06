class Solution {
public:
    int numberOfMatches(int n) {
        // return n-1;

        int ans = 0;
        while(n>0){
            if(n == 1){
                return ans;
            }
            if(n%2 != 0){
                ans += n/2;
                n = n/2 +1;
            }else{
                n /= 2;
                ans += n;
            }
        }
        return ans;
    }
};
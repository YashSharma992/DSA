class Solution {
public:
    int reverseBits(int n) {
        string s(32,'0');
        int i=0;
        while(n>=1){
            if(n%2==1)
            s[i]='1';

            n/=2;
            i++;
        }
        long long ans=0;
        for (int i = 0; i < 32; i++) {
            ans = ans * 2 + (s[i] - '0');
        }
        return ans;
    }
};
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=0;
        for(int i=0;i<32;i++){
            if(start%2!=goal%2)
            ans++;
            start/=2;
            goal/=2;
        }
        return ans;
    }
};
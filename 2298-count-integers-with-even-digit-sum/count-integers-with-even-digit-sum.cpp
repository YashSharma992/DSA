class Solution {
public:
    bool even(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n/=10;
        }
        if(sum&1)
        return 0;

        return 1;
    }
    int countEven(int num) {
        int ans=0;
        for(int i=2;i<=num;i++){
            if(even(i))
            ans++;
        }
        return ans;
    }
};
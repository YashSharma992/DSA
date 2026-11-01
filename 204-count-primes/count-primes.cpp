class Solution {
public:
    int countPrimes(int n) {
        // if (n <= 2) 
        // return 0;

        // vector<char> isPrime(n, 1);
        // isPrime[0] = 0;
        // isPrime[1] = 0;

        // for (int i = 4; i < n; i += 2)
        //     isPrime[i] = 0;

        // for (long long i = 3; i * i < n; i += 2) {
        //     if (isPrime[i]) {
        //         for (long long j = i * i; j < n; j += 2 * i) {
        //             isPrime[j] = 0;
        //         }
        //     }
        // }

        // int ans = 1;

        // for (int i = 3; i < n; i += 2) {
        //     if (isPrime[i])
        //         ans++;
        // }

        // return ans;





        if (n <= 2)
        return 0;
        vector<bool>prime(n,true);
        long long cnt=n-2;
        for(int i=2;i*i<n;i++){
            if(prime[i]){
                for(int j=i*i;j<n;j+=i){
                    if(prime[j]){
                    prime[j]=false;
                    cnt--;
                    }
                }
            }
        }
        return cnt;



        // vector<bool>prime(n,1);
        // for(int i=4;i<n;i+=2)
        // prime[i]=false;
        // for(int i=3;i*i<n;i+=2){
        //     if(prime[i]){
        //         for(int j=i*i;j<n;j+=i){
        //             prime[j]=0;
        //         }
        //     }
        // }
        // int cnt=0;
        // for(int i=2;i<n;i++){
        //     if(prime[i]==1)
        //     cnt++;
        // }
        // return cnt;




        // vector<bool>prime(n+1,true);
        // prime[0] = false;
        // prime[1] = false;
        // if (n <= 2)
        // return 0;
        // for(int i=2;i*i<=n;i++){
        //     if(prime[i]){
        //         for(int j=i*i;j<=n;j+=i){
        //             prime[j]=false;
        //         }
        //     }
        // }
        // int cnt=0;
        // for(int i=2;i<n;i++){
        //     if(prime[i])
        //     cnt++;
        // }
        // return cnt;
    }
};
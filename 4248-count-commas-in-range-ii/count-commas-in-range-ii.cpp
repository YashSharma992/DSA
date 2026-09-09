class Solution {
public:
    long long countCommas(long long n) {
        long long comma = 0;
        long long base = 1000;
        if (n < 1000)
            return 0;
        else {
            while (base <= n) {
                comma += (n - base + 1);
                base *= 1000;
            }
        }

        return comma;

        //     long long temp=0;

        //     if(n<1000)
        //     return 0;

        //     if(n<pow(10,6)){
        //          temp=n-999;
        //     return temp;
        // }

        //     if(n<pow(10,9)){
        //          temp=1000000-999-1;
        //      temp+=2*(n-999999);
        //     return temp;
        // }
        //     if(n<pow(10,12)){
        //          temp=1000000-999-1;
        //      temp+=2*(1000000000-999999-1);
        //         temp+=3*(n-999999999);
        //         return temp;
        //     }
        //     if(n<pow(10,15)){
        //         temp=1000000-999-1;
        //      temp+=2*(1000000000-999999-1);
        //         temp+=3*(1000000000000-999999999-1);
        //          temp+=4*(n-999999999999);
        //         return temp;

        //     }
        //      temp=1000000-999-1;
        //      temp+=2*(1000000000-999999-1);
        //         temp+=3*(1000000000000-999999999-1);
        //          temp+=4*(n-999999999999-1);
        //     return temp+5;

        // int commas=0;
        // for(int i=1;i<=n;i++){
        //     string number=to_string(i);
        //     commas+=(number.size()-1)/3;
        // }
        // return commas;

        //     if(n<1000)
        //     return 0;
        //     else if(n<pow(10,6))
        //     return n-999;
        //     else if(n<pow(10,9))
        //     return 2*(n-pow(10,6)+1)+pow(10,6)-1000;
        //     else if(n<pow(10,12))
        //     return 3*(n-pow(10,9)+1)+2*pow(10,6)-1000+1997000000;
        //     else if(n<pow(10,15))
        //     return 4*(n-pow(10,12)+1)+3*pow(10,9)-1000+29959990000000;

        // return 5*(n-pow(10,15)+1)+4*pow(10,12)-1000;
    }
};
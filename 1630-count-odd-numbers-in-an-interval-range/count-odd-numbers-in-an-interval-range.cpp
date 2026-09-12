class Solution {
public:
    bool odd(int n){
        return n%2==1;
    }
    int countOdds(int low, int high) {
        if(odd(low)||odd(high))
        return (high-low)/2+1;

        return (high-low)/2;
    }
};
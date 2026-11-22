class Solution {
public:
    int minRange(int a, int b, int c) {
        int maxi = a;
        int secmax = INT_MIN;

        if (maxi < b) {
            secmax = maxi;
            maxi = b;
        } 
        else {
            secmax = b;
        }

        if (maxi < c) {
            secmax = maxi;
            maxi = c;
        } 
        else if (secmax < c) {
            secmax = c;
        }

        int mini = min({a, b, c});

        if (secmax + mini > maxi)
            return maxi - mini;

        return secmax;
    }
};
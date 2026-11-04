class Solution {
public:
    int findComplement(int num) {
        if(num == 0)
        return 1;
        string s;
        while(num){
            if(num%2)
            s.push_back('0');
            else
            s.push_back('1');
            num/=2;
        }
        int ans=0;
        int curr=0;
        for(auto it:s){
            ans+=((it-'0')*(1<<curr));
            curr++;
        }
        return ans;
    }
};
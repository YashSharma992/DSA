class Solution {
public:
    bool hasAlternatingBits(int n) {
        int m=n;
        string s;
        while(m){
            s.push_back(m%2);
            m/=2;
        }
        reverse(s.begin(),s.end());
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1])
            return false;
        }
        return true;
    }
};
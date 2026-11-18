class Solution {
public:
    int minChanges(string s) {
        int ans=0;
        for(int i=0;i+1<s.size();i+=2){
            if(s[i]!=s[i+1])
            ans++;
        }
        return ans;


        // int zero=0;
        // for(auto it:s){
        //     if(it=='0')
        //     zero++;
        // }
        // int n=s.size();
        // return min(zero,n-zero);
    }
};
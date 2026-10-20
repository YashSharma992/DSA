class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        int ans=0;
        for(int i=0;i<t.size();i++){
            if (mp[t[i]] > 0) {
                mp[t[i]]--;
            }
            else {
                ans++;
            }
        }
        return ans;


        // int cnt=0;
        // for(int i=0;i<s.size();i++){
        //     if(s.find(t[i]) == string::npos)
        //     cnt++;
        // }
        // return cnt;
    }
};
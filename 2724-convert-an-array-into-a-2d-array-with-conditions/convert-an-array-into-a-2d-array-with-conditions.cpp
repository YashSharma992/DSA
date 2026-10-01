class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>>ans;
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        for(auto it : mp) {
            int x = it.first;
            int freq = it.second;
            for(int i = 0; i < freq; i++) {
                if(ans.size() <= i)
                    ans.push_back({});

                ans[i].push_back(x);
            }
        }
        return ans;
    }
};
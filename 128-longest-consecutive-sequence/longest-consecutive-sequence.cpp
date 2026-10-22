class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s(nums.begin(),nums.end());
        int maxlen=0;
        for(auto x:s){
            if(s.find(x-1)==s.end()){
                int len=1;
                while(s.find(x+1)!=s.end()){
                    len++;
                    x++;
                }
                maxlen=max(maxlen,len);
            }
        }
        return maxlen;
    }
};
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        int cnt=0;
        int smaller=0;
        for(int x:nums){
            if(x==target)
            cnt++;
            else if(x<target)
            smaller++;
        }
        for(int i=smaller;i<smaller+cnt;i++)
        ans.push_back(i);
        
        return ans;
    }
};
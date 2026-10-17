class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int ans=original;
        sort(nums.begin(),nums.end());
        for(auto x:nums){
            if(x==ans)
            ans*=2;
        }
        return ans;
    }
};
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int res=0;
        int maxi=*max_element(nums.begin(),nums.end());
        for(auto it:nums){
            res+=maxi-it;
        }
        return res;
    }
};
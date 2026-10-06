class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        for(int j=0;j<nums.size();j++){
        for(int i=0;i+1<nums.size();i++){
            if((nums[i]>nums[i+1])&&(__builtin_popcount(nums[i])==__builtin_popcount(nums[i+1]))){
                swap(nums[i],nums[i+1]);
            }
        }
        }
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]>nums[i+1])
            return false;
        }
        return true;
    }
};
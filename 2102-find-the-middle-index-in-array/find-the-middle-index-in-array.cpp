class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        int leftsum=0;
        for(int i=0;i<nums.size();i++){
            if(leftsum==(sum-leftsum-nums[i]))
            return i;
            else
            leftsum+=nums[i];
        }
        return -1;
    }
};
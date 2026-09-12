class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int ans=0;
        for(int i=k;i<nums.size()-k;i++){
            if((nums[i]>nums[i-k])&&(nums[i]>nums[i+k])){
                ans+=nums[i];
            }
        }
        for(int i=0;i<k;i++){
            if(nums[i]>nums[i+k])
            ans+=nums[i];
        }
        for(int i=nums.size()-1;i>nums.size()-k-1;i--){
            if(nums[i]>nums[i-k])
            ans+=nums[i];
        }
        return ans;
    }
};
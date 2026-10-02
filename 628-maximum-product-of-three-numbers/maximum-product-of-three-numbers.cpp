class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1=INT_MIN;
        int secmax=INT_MIN;
        int thridmax=INT_MIN;
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max1){
                thridmax=secmax;
                secmax=max1;
                max1=nums[i];
            }
            else if(nums[i]>secmax){
                thridmax=secmax;
                secmax=nums[i];
            }
            else if(nums[i]>thridmax){
                thridmax=nums[i];
            }
            if(nums[i] < min1) {
                min2 = min1;
                min1 = nums[i];
            }
            else if(nums[i] < min2) {
                min2 = nums[i];
            }
        }
        int ans=max(thridmax * secmax * max1,min1 * min2 * max1);
        return ans;
    }
};
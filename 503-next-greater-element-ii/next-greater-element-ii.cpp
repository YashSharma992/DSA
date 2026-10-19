class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>ans(nums.size(),-1);
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<i+nums.size();j++){
                if(nums[i]<nums[j%n]){
                    ans[i]=nums[j%n];
                    break;
                }
            }
        }
        return ans;
    }
};
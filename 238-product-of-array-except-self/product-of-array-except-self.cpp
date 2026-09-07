class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size());
        int left=1;
        int right=1;
        for(int i=0;i<nums.size();i++){
            ans[i]=left;
            left*=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            ans[i]*=right;
            right*=nums[i];
        }
        return ans;

        // int n=nums.size();
        // vector<int>ans(n,1);
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         if(i==j)
        //         continue;
        //         else
        //         ans[i]*=nums[j];
        //     }
        // }
        // return ans;
    }
};
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ans=1;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        // int j=0;
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]!=nums[i+1])
        //     j++;
        //     else
        //     nums[j]=nums[i];
        // }
        for(int i=0;i<n;i++){
            if(nums[i]<=0)
            continue;
            else if(nums[i]==ans)
            ans++;
            else if(nums[i]>ans)
            break;
        }
        return ans;
    }
};
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        // int ans=-1;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==-nums[j] && abs(nums[i])>ans)
        //         ans=abs(nums[i]);
        //     }
        // }
        // return ans;

        sort(nums.begin(),nums.end());
        int high=nums.size()-1;
        int low=0;
        while(low<=high){
            if(nums[low]+nums[high]==0)
            return nums[high];
            else if(nums[low]+nums[high]>0)
            high--;
            else
            low++;
        }
        return -1;
    }
};
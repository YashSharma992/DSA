class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int ans=0;
        int currd=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i+1<nums.size();i++){
            currd=abs(nums[i+1]-nums[i]);
            ans=max(currd,ans);
        }
        return ans;
    }
};
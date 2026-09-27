class Solution {
public:
    int jump(vector<int>& nums) {
        int ans=0;
        int l=0;
        int r=0;
        int far=0;
        for(int i=0;i<nums.size()-1;i++){
            far=max(far,i+nums[i]);
            if(i==r){
                ans++;
                l=r+1;
                r=far;
            }
        }
        return ans;
    }
};
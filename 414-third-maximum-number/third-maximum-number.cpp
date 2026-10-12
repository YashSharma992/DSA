class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int maxi=nums[0];
        long long secmax=LLONG_MIN;
        long long thirdmax=LLONG_MIN;
        int cnt=0;
        for(int i=1;i<nums.size();i++){
            if(maxi<nums[i]){
                thirdmax=secmax;
                secmax=maxi;
                maxi=nums[i];
                cnt++;
            }
            else if(secmax<nums[i]&&maxi>nums[i]){
                thirdmax=secmax;
                secmax=nums[i];
                cnt++;
            }
            else if(thirdmax<nums[i]&&secmax>nums[i]){
                thirdmax=nums[i];
                cnt++;
            }
        }
        if(thirdmax==LLONG_MIN){
            return maxi;
        }
        return thirdmax;
    }
};
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i+=3){
            if(nums[i-1]!=nums[i])
            return nums[i-1];
        }
        return nums[nums.size()-1];



        // int n=nums.size();
        // int ans=0;
        // for(int i=0;i<32;i++){
        //     int cnt=0;
        //     for(int j=0;j<n;j++){
        //         if((nums[j])&(1<<i))
        //         cnt++;
        //     }
        //     if(cnt%3!=0)
        //     ans+=(1<<i);
        // }
        // return ans;


        // int n=nums.size();
        // unordered_map<int,int>ans;
        // for(int i=0;i<n;i++){
        //     ans[nums[i]]++;
        // }
        // for(int i=0;i<n;i++){
        //     if(ans[nums[i]]!=3)
        //     return nums[i];
        // }
        // return -1;
    }
};
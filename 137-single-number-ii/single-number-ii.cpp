class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<32;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if((nums[j])&(1<<i))
                cnt++;
            }
            if(cnt%3!=0)
            ans+=(1<<i);
        }
        return ans;


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
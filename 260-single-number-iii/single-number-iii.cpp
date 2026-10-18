class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long xor1=0;
        for(int i=0;i<nums.size();i++){
            xor1^=nums[i];
        }
        long long ans=xor1&(-xor1);
        int a=0;
        int b=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&ans)
            a=a^nums[i];
            else
            b=b^nums[i];
        }
        return {a,b};


        // int n = nums.size();
        // vector<int> v;
        // unordered_map<int, int> ans;
        // for (int i = 0; i < n; i++) {
        //     ans[nums[i]]++;
        // }
        // for (int i = 0; i < n; i++) {
        //     if(ans[nums[i]] == 1) 
        //     v.push_back(nums[i]);
        // }
        // return v;
    }
};
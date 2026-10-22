class Solution {
public:
    void subsets(vector<vector<int>>&ans,vector<int>v,int i,int n,vector<int>&nums){
        if(i==n){
            ans.push_back(v);
            return;
        }
        subsets(ans,v,i+1,n,nums);
        v.push_back(nums[i]);
        subsets(ans,v,i+1,n,nums);
        v.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        vector<int>v;
        subsets(ans,v,0,n,nums);
        return ans;


        // vector<vector<int>>ans;
        // int n = nums.size();

        // for (int mask = 0; mask < (1 << n); mask++) {
        //     vector<int> temp;
        //     for (int j = 0; j < n; j++) {
        //         if (mask & (1 << j)) {
        //             temp.push_back(nums[j]);
        //         }
        //     }
        //     ans.push_back(temp);
        // }
        // return ans;
    }
};
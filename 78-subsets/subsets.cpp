class Solution {
public:
    // void helper(vector<vector<int>>&ans,vector<int>v,int i,int n,vector<int>& nums){
    //     if(i==n){
    //         ans.push_back(v);
    //         return;
    //     }
    //     helper(ans,v,i+1,n,nums);
    //     v.push_back(nums[i]);
    //     helper(ans,v,i+1,n,nums);
    //     v.pop_back();
    // }
    vector<vector<int>> subsets(vector<int>& nums) {
        // vector<vector<int>>ans;
        // vector<int>v;
        // helper(ans,v,0,nums.size(),nums);
        // return ans;

        vector<vector<int>>ans;
        for(int i=0;i<(1<<nums.size());i++){
            vector<int>v;
            for(int j=0;j<nums.size();j++){
                if(i&(1<<j))
                v.push_back(nums[j]);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
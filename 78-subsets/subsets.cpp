class Solution {
public:
    void helper(vector<vector<int>>&ans,vector<int>v,int i,int n,vector<int>& nums){
        if(i==n){
            ans.push_back(v);
            return;
        }
        helper(ans,v,i+1,n,nums);
        v.push_back(nums[i]);
        helper(ans,v,i+1,n,nums);
        v.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        helper(ans,v,0,nums.size(),nums);
        return ans;
    }
};
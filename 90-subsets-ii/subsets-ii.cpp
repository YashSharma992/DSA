class Solution {
public:
    void fun(vector<vector<int>>&ans,vector<int>nums,vector<int>v,int i,int n){
        if(i==n){
            ans.push_back(v);
            return;
        }
        fun(ans,nums,v,i+1,n);
        v.push_back(nums[i]);
        fun(ans,nums,v,i+1,n);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        fun(ans,nums,{},0,nums.size());
        set<vector<int>>st(ans.begin(),ans.end());
        vector<vector<int>>res(st.begin(),st.end());
        return res;
    }
};
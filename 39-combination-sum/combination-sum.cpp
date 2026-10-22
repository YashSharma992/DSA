class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&candidates,vector<int>temp,int i,int sum,int target){
        if (sum == target) {
            ans.push_back(temp);
            return;
        }

        if (i == candidates.size() || sum > target) {
            return;
        }
        temp.push_back(candidates[i]);
        solve(ans, candidates, temp, i, sum + candidates[i], target);

        temp.pop_back();
        solve(ans, candidates, temp, i + 1, sum, target);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        solve(ans,candidates,temp,0,0,target);
        return ans;
    }
};
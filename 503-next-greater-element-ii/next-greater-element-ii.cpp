class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int>s;
        int n=nums.size();
        vector<int>ans(n,-1);
        for(int i=2*n-1;i>=0;i--){
            int idx = i % n;
            while (!s.empty() && s.top() <= nums[idx]) {
                s.pop();
            }
            if (i < n && !s.empty()) {
                ans[idx] = s.top();
            }
            s.push(nums[idx]);
        }
        return ans;

        // vector<int>ans(nums.size(),-1);
        // int n=nums.size();
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<i+nums.size();j++){
        //         if(nums[i]<nums[j%n]){
        //             ans[i]=nums[j%n];
        //             break;
        //         }
        //     }
        // }
        // return ans;
    }
};
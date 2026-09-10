class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans(nums1.size(),-1);
        vector<int>store(nums2.size(),-1);
        stack<int>st;
        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty()&&st.top()<=nums2[i]){
                st.pop();
            }
            if(!st.empty())
            store[i]=st.top();
            st.push(nums2[i]);
        }
        for (int idx = 0; idx < nums1.size(); idx++) {
            for (int i = 0; i < nums2.size(); i++) {
                if (nums1[idx] == nums2[i]) {
                    ans[idx] = store[i];
                    break;
                }
            }
        }
        return ans;
    }
};
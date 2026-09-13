class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int longest = 0;

        for(int x : st) {
            if(st.find(x - 1) == st.end()) {
                int currlen = 1;
                int curr = x;

                while(st.find(curr + 1) != st.end()) {
                    currlen++;
                    curr++;
                }

                longest = max(longest, currlen);
            }
        }

        return longest;


        // int longest = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     if (st.find(nums[i] - 1) == st.end()) {
        //         int currlen = 1;
        //         int curr = nums[i];
        //         while (st.find(curr + 1) != st.end()) {
        //             currlen++;
        //             curr++;
        //         }
        //         longest = max(longest, currlen);
        //     }
        // }
        // return longest;
    }
};
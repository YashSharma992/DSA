class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int median = nums[n / 2];

        int moves=0;
        for(int it:nums){
            moves+=abs(it-median);
        }
        return moves;
    }
};
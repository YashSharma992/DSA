class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int low = 0;
        for(int high = 0; high < nums.size(); high++) {
            if(low < 2 || nums[high] != nums[low - 2]) {
                nums[low] = nums[high];
                low++;
            }
        }
        return low;
    }
};
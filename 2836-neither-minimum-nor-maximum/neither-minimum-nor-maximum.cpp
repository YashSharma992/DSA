class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int maxl=*max_element(nums.begin(),nums.end());
        int minl=*min_element(nums.begin(),nums.end());
        for(int x:nums){
            if(x!=maxl&&x!=minl)
            return x;
        }
        return -1;
    }
};
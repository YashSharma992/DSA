class Solution {
public:
    int findMin(vector<int>& nums) {
        // int low=0;
        // int high=nums.size()-1;
        // while(low<high){
        //     int mid=low+((high-low)>>1);
        //     if(nums[mid]>nums[high]){
        //         low=mid+1;
        //     }
        //     else if(nums[mid]<nums[high]){
        //         high=mid;
        //     }
        //     else{
        //         high--;
        //     }
        // }
        // return nums[low];


        return *min_element(nums.begin(),nums.end());
    }
};
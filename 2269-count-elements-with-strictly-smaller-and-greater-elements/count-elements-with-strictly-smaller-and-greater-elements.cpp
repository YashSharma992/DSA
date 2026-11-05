class Solution {
public:
    int countElements(vector<int>& nums) {
        int cnt=0;
        int mini=*min_element(nums.begin(),nums.end());
        int maxi=*max_element(nums.begin(),nums.end());
        for(auto it:nums){
            if(it!=mini && it!=maxi)
            cnt++;
        }
        return cnt;
    }
};
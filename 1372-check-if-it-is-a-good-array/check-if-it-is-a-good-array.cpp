class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int g=nums[0];
        if(nums.size()==1 && nums[0]==1)
        return 1;
        for(int i=1;i<nums.size();i++){
            g=gcd(g,nums[i]);
            if(g==1)
            return true;
        }
        return false;


        // int g = 0;
        
        // for (int x : nums) {
        //     g = gcd(g, x);
        //     if (g == 1)
        //         return true;
        // }

        // return false;
    }
};
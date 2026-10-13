class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        long long max=nums[0];
        vector<int>gc;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i])
            max=nums[i];
            long long g=gcd(nums[i],max);
            gc.push_back(g);
        }
        sort(gc.begin(),gc.end());
        long long sum=0;
        int i=0,j=gc.size()-1;
        while(i<j){
            sum+=gcd(gc[i],gc[j]);
            i++;
            j--;
        }
        return sum;
    }
};
class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int sum=0;
            int t=nums[i];
            while(t){
                sum+=(t%10);
                t/=10;
            }
            if(i==sum)
            return i;
        }
        return -1;

        
        // for(int i=0;i<nums.size();i++){
        //     if(i==0&&nums[i]==0)
        //     return 0;
        //     if(((nums[i])%9)==i && i!=0)
        //     return i;
        // }
        // return -1;
    }
};
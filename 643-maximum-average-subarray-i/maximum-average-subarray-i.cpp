class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sumk=0;
        for(int i=0;i<k;i++){
            sumk+=nums[i];
        }
        double maxavg=sumk/k;
        for(int i=k;i<nums.size();i++){
            sumk+=nums[i]-nums[i-k];
            double avg=sumk/k;
            maxavg=max(maxavg,avg);
        }
        return maxavg;
    }
};
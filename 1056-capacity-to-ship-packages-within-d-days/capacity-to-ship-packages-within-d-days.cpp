int no_of_days(vector<int>& weights,int capacity){
    int load = 0;
    int day = 1;

    for(int weight : weights) {
        if(load + weight > capacity) {
            day++;
            load = weight;
        }
        else {
            load += weight;
        }
    }

    return day;
}

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int maxl=*max_element(weights.begin(),weights.end());
        int sum = accumulate(weights.begin(), weights.end(), 0);
        
        // for(int i=maxl;i<=sum;i++){
        //     if(no_of_days(weights,i)<=days)
        //     return i;
        // }
        // return -1;

        int low=maxl;
        int high=sum;
        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(no_of_days(weights, mid) <= days) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        return low;
    }
};
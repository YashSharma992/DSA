class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(), [](string a, string b) {
            if (a.size() == b.size())
                return a > b;

            return a.size() > b.size();
        });

        return nums[k - 1];


        // priority_queue<int,vector<int>,greater<int>>pq;
        // for(int i=0;i<k;i++){
        //     pq.push(stoi(nums[i]));
        // }
        // for(int i=k;i<nums.size();i++){
        //     if(pq.top()<stoi(nums[i])){
        //         pq.pop();
        //         pq.push(stoi(nums[i]));
        //     }
        // }
        // return to_string(pq.top());
    }
};
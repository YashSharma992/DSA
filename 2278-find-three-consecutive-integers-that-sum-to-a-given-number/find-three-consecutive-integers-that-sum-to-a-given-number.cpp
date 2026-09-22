class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long>ans(3);
        if(num%3!=0)
        return {};
        else{
            long long a=num/3;
            for(int i=0;i<3;i++){
                ans[i]=a-1+i;
            }
            return ans;
        }
    }
};
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end(),greater<int>());
        int sum=accumulate(apple.begin(),apple.end(),0);
        int cnt=0;
        int curr=0;
        for(int i=0;i<capacity.size();i++){
            curr += capacity[i];
            cnt++;
            if(curr>=sum)
            return cnt;
        }
        return -1;
    }
};
class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int idx=-1;
        int ans=0;
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]>=itemSize&&(ans==0||ans>capacity[i])){
                idx=i;
                ans=capacity[i];
            }
        }
        return idx;
    }
};
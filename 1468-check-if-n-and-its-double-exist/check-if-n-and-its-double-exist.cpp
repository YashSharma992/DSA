class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        for(int x:arr){
            if(mp.find(2*x)!=mp.end()){
                if(x != 0 || mp[0] > 1)
                    return true;
            }
        }
        return false;
    }
};
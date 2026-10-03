class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp1;
        unordered_map<int,int>mp2;
        for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            mp2[nums2[i]]++;
        }
        int cnt1=0;
        int cnt2=0;
        for(auto it:mp1){
            if(mp2.find(it.first)!=mp2.end())
            cnt1 += it.second;
        }
        for(auto it:mp2){
            if(mp1.find(it.first)!=mp1.end())
            cnt2 += it.second;
        }
        return {cnt1,cnt2};
    }
};
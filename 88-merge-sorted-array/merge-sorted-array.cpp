class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>ans(m+n);
        int i=0,j=0;
        while(i<m&&j<n){
            if(nums1[i]<=nums2[j]){
                ans[i+j]=nums1[i];
                i++;
            }
            else{
                ans[i+j]=nums2[j];
                j++;
            }
        }
        while(i<m){
            ans[i+j]=nums1[i];
            i++;
        }
        while(j<n){
            ans[i+j]=nums2[j];
            j++;
        }
        for(int i=0;i<n+m;i++){
            nums1[i]=ans[i];
        }
    }
};
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=n+m-1;
        int j=n-1;
        int i=m-1;
        while(i>=0 && j>=0){
            if(nums1[i]<=nums2[j]){
                nums1[k]=nums2[j];
                k--;
                j--;
            }
            else{
                nums1[k]=nums1[i];
                k--;
                i--;
            }
        }

        while (j >= 0) {
            nums1[k] = nums2[j];
            k--;
            j--;
        }

        
        // vector<int>ans(m+n);
        // int i=0,j=0;
        // while(i<m&&j<n){
        //     if(nums1[i]<=nums2[j]){
        //         ans[i+j]=nums1[i];
        //         i++;
        //     }
        //     else{
        //         ans[i+j]=nums2[j];
        //         j++;
        //     }
        // }
        // while(i<m){
        //     ans[i+j]=nums1[i];
        //     i++;
        // }
        // while(j<n){
        //     ans[i+j]=nums2[j];
        //     j++;
        // }
        // for(int i=0;i<n+m;i++){
        //     nums1[i]=ans[i];
        // }
    }
};
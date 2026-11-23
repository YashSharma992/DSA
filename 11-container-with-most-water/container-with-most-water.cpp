class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int m=0;
        while(l<r){
            int h=min(height[l],height[r]);
            int w=r-l;
            int a=h*w;
            m=max(m,a);
            if(height[l]<height[r]){
                l++;
            }
            else
                r--;
        }
        return m;
    }
};
class Solution {
public:
    long long catalan(int n,vector<int>&dat){
	    if(n<=1)
	    return 1;
	    if(dat[n]!=-1)
	    return dat[n];
	    int res=0;
	    for(int i=0;i<n;i++){
	        res+=catalan(i,dat)*catalan(n-1-i,dat);
	        dat[n]=res;
	    }
	    return dat[n];
	    
	}
    int numTrees(int n) {
        vector<int>dat(n+1,-1);
	    return catalan(n,dat);
    }
};
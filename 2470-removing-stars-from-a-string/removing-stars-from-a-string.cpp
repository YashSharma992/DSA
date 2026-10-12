class Solution {
public:
    string removeStars(string s) {
        string ans="";
        for(auto it:s){
            if(it=='*'&&ans.size()>0){
                ans.pop_back();
            }
            else{
                ans+=it;
            }
        }
        return ans;
    }
};
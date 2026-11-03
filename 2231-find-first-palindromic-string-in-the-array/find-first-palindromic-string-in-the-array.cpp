class Solution {
public:
    bool ispalindrome(string s){
        int l=0;
        int r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r])
            return false;
            else{
                l++;
                r--;
            }
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto it:words){
            if(ispalindrome(it))
            return it;
        }
        return "";
    }
};
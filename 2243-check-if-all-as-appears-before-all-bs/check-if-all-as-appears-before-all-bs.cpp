class Solution {
public:
    bool checkString(string s) {
        bool b=false;
        for(auto it:s){
            if(it=='b')
            b=true;
            if(it=='a'&&b)
            return false;
        }
        return true;
    }
};
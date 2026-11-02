class Solution {
public:
    int passwordStrength(string password) {
        unordered_set st(password.begin(),password.end());
        string s(st.begin(),st.end());
        int res=0;
        for(auto it:s){
            if(it>='a'&&it<='z')
            res+=1;
            else if(it>='A'&&it<='Z')
            res+=2;
            else if(it>='0'&&it<='9')
            res+=3;
            else
            res+=5;
        }
        return res;
    }
};
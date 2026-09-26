class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len=0;
        for(int i=0;i<s.size();i++){
            string sub="";
            for(int j=i;j<s.size();j++){
                if(sub.find(s[j])!=string::npos)
                break;

                sub += s[j];
                len = max(len, (int)sub.length());
            }
        }
        return len;
    }
};
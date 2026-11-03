class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> v(26, 0);
        for(auto it : magazine) {
            v[it - 'a']++;
        }
        for(auto it : ransomNote) {
            if(v[it - 'a'] == 0)
            return false;

            v[it - 'a']--;
        }
        return true;
    }
};
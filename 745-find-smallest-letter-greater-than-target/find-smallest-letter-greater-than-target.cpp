class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans=letters[0];
        sort(letters.begin(),letters.end());
        for(auto it:letters){
            if(it>target)
            return it;
        }
        return ans;
    }
};
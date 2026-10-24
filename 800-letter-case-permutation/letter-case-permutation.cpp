class Solution {
public:
    void helper(vector<string>& ans, string v, int i, int n, string s) {
        if (i == n) {
            ans.push_back(v);
            return;
        }

        if (isalpha(s[i])) {
            v.push_back(tolower(s[i]));
            helper(ans, v, i + 1, n, s);
            v.pop_back();

            v.push_back(toupper(s[i]));
            helper(ans, v, i + 1, n, s);
            v.pop_back();
        } 
        else {
            v.push_back(s[i]);
            helper(ans, v, i + 1, n, s);
            v.pop_back();
        }
    }

    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        helper(ans, "", 0, s.size(), s);
        return ans;
    }
};
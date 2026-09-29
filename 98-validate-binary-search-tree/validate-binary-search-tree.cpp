/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // bool inorder(TreeNode* root, long long minVal, long long maxVal) {
    //     if(root == NULL)
    //         return true;

    //     if(root->val <= minVal || root->val >= maxVal)
    //         return false;

    //     return inorder(root->left, minVal, root->val) &&
    //            inorder(root->right, root->val, maxVal);
    // }


    // bool isValidBST(TreeNode* root) {
    //      return inorder(root, LLONG_MIN, LLONG_MAX);
    // }

    void inorder(TreeNode* root,vector<int>&ans) {
        if (root == NULL)
            return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    bool isValidBST(TreeNode* root) {
        if(!root)
        return true;
        vector<int>ans;
        inorder(root,ans);
        for(int i=0;i+1<ans.size();i++){
            if(ans[i]>=ans[i+1])
            return false;
        }
        return true;
    }
};
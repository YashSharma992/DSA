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
    bool inorder(TreeNode* root, long long minVal, long long maxVal) {
        if(root == NULL)
            return true;

        if(root->val <= minVal || root->val >= maxVal)
            return false;

        return inorder(root->left, minVal, root->val) &&
               inorder(root->right, root->val, maxVal);
    }

    bool isValidBST(TreeNode* root) {
        return inorder(root, LLONG_MIN, LLONG_MAX);
    }
};
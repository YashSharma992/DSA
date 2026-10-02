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
    // int cnt=0;
    int left_height(TreeNode*root){
        int h=0;
        while(root){
            h++;
            root=root->left;
        }
        return h;
    }
    int right_height(TreeNode*root){
        int h=0;
        while(root){
            h++;
            root=root->right;
        }
        return h;
    }
    int countNodes(TreeNode* root) {
        if(!root)
        return 0;
        int lh=left_height(root->left);
        int rh=right_height(root->right);
        int ans=1;
        if(lh==rh)
        return (ans<<(lh+1))-1;

        return 1+countNodes(root->left)+countNodes(root->right);

        // if(!root)
        // return 0;
        // return 1+countNodes(root->left)+countNodes(root->right);

        // if(root){
        //     cnt++;
        //     countNodes(root->left)+countNodes(root->right);
        // }
        // return cnt;
    }
};
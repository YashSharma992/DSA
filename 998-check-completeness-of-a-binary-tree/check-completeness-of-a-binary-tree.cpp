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
    bool isCompleteTree(TreeNode* root) {
        if(!root)
        return 1;
        queue<TreeNode*>q;
        q.push(root);
        bool flag=0;
        while(!q.empty()){
            TreeNode*curr=q.front();
            q.pop();
            if(curr->left){
                if(flag)
                return 0;
                q.push(curr->left);
            }
            else{
                flag=1;
            }
            if(curr->right){
            if(flag)
            return 0;
            q.push(curr->right);
            }
            else{
                flag=1;
            }
        }
        return 1;
    }
};
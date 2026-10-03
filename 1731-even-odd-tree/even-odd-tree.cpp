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
    bool isEvenOddTree(TreeNode* root) {
        if(!root)
        return true;
        queue<TreeNode*>q;
        q.push(root);
        int level=0;
        while(!q.empty()){
            vector<int>v;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*curr=q.front();
                q.pop();
                v.push_back(curr->val);
                if(curr->left)
                q.push(curr->left);
                if(curr->right)
                q.push(curr->right);
            }
            for(int i = 0; i < v.size(); i++) {

                if(level % 2 == 0 && v[i] % 2 == 0)
                    return false;

                if(level % 2 == 1 && v[i] % 2 != 0)
                    return false;
            }

            for(int i = 0; i + 1 < v.size(); i++) {

                if(level % 2 == 0 && v[i] >= v[i+1])
                    return false;

                if(level % 2 == 1 && v[i] <= v[i+1])
                    return false;
            }
            level++;
        }
        return true;
    }
};
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
    int maxLevelSum(TreeNode* root) {
        if(!root){
            return 0;
        }
        int maxlevel=1;
        int maxsum=INT_MIN;
        queue<TreeNode*>q;
        q.push(root);
        int level=1;
        while(!q.empty()){
            int sum=0;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode*curr=q.front();
                q.pop();
                sum+=curr->val;
                if(curr->left)
                q.push(curr->left);
                if(curr->right)
                q.push(curr->right);
            }
            if(sum>maxsum){
                maxsum=sum;
                maxlevel=level;
            }
            level++;
        }
        return maxlevel;
    }
};
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
    TreeNode* constr(vector<int>& nums,int s,int e){
        TreeNode* root;
        if(s>e){
            return nullptr;
        }
        int mid=s+(e-s)/2;
        root = new TreeNode(nums[mid]);
        root->left=constr(nums, s, mid - 1);
        root->right = constr(nums, mid + 1, e);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty()){
            return nullptr;
        }
        return constr(nums,0,nums.size()-1);
    }
};
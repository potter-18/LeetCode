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
    TreeNode* pruneTree(TreeNode* root) {
        TreeNode* temp = root;
        
        if(temp->left){
            temp->left = pruneTree(temp->left);
        }
        if(temp->right){
            temp->right = pruneTree(temp->right);
        }
        
        if(temp->left == NULL && temp->right == NULL){
            if(temp->val == 0){
                return NULL;
            }
        }
        
        return root;
        
    }
};
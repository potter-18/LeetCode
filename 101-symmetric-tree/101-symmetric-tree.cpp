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
    bool sym(TreeNode* left, TreeNode* right){
        if(left == NULL || right == NULL){
            if(left == NULL && right == NULL) return true;
            else return false;
        }
        
        if(left->val == right->val && sym(left->left,right->right) && sym(left->right,right->left)) return true;
        
        return false;
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root == NULL) return true;
        
        return sym(root->left,root->right);
    }
};
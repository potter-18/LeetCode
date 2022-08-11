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
    bool isValidBST(TreeNode* root) {
        return validBst(root,LONG_MIN,LONG_MAX);
    }
    
    bool validBst(TreeNode * root, long long minValue, long long maxValue){

        if(root->val <= minValue || root->val >= maxValue)
            return false;
        if(root->left != nullptr && !validBst(root->left, minValue, root->val))
            return false;
        if(root->right != nullptr && !validBst(root->right, root->val, maxValue))
            return false;
        return true;
    }
};

// 9 Min - Checked Solution at algoexpert

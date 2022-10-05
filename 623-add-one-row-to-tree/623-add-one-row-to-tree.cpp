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
    TreeNode* addOneRow(TreeNode* root, int val, int depth){
        if(root == nullptr)
            return nullptr;
        
        if(depth == 1){
            TreeNode* newNode = new TreeNode(val,root,nullptr);
            root = newNode;
            return root;
        }
        
        if(depth == 2){
            TreeNode* newNode1 = new TreeNode(val,root->left,nullptr);
            TreeNode* newNode2 = new TreeNode(val,nullptr,root->right);
            root->left = newNode1;
            root->right = newNode2;
        }
        else{
            addOneRow(root->left,val,depth-1);
            addOneRow(root->right,val,depth-1);
        }
        
        return root;
    }
};
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
    void addEle(TreeNode* root, int val, int depth, int currDepth){
        currDepth++;
        if(root == nullptr)
            return;
        if(currDepth == depth-1){
            TreeNode* newNode1 = new TreeNode(val,root->left,nullptr);
            TreeNode* newNode2 = new TreeNode(val,nullptr,root->right);
            root->left = newNode1;
            root->right = newNode2;
            return;
        }
        
        addEle(root->left,val,depth,currDepth);
        addEle(root->right,val,depth,currDepth);
    }
    TreeNode* addOneRow(TreeNode* root, int val, int depth){
        if(depth == 1){
            TreeNode* newNode = new TreeNode(val,root,nullptr);
            root = newNode;
            return root;
        }
        addEle(root,val,depth,0);
        return root;
    }
};
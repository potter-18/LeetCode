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
    vector<vector<int>> ans;
private:
    void checkSum(TreeNode* root, int targetSum, vector<int>& currSum){
        if(root == NULL){
            return;
        }
        currSum.push_back(root->val);
        if(!root->left && !root->right){
            int sum = 0;
            for(auto it : currSum){
                sum += it;
            }
            if(targetSum == sum){
                ans.push_back(currSum);
            }
            currSum.pop_back();
            return;
        }
        checkSum(root->left,targetSum,currSum);
        checkSum(root->right,targetSum,currSum);
        currSum.pop_back();
        
        
        
    }
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum){
        vector<int> currSum;
        vector<vector<int>> currAns;
        checkSum(root,targetSum,currSum);
        
        
        return ans;
    }
};
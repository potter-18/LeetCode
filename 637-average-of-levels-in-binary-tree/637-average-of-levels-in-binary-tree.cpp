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
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<double> ans;
        
        while(!q.empty()){
            double ave = 0.0;
            int k = q.size();
            int m= q.size();
            
            while(k > 0){
                ave += q.front()->val;
                if(q.front()->left != NULL){
                    q.push(q.front()->left);
                }
                if(q.front()->right != NULL){
                    q.push(q.front()->right);
                }
                q.pop();
                k--;
            }
            ans.push_back(ave/m);
        }
        
        return ans;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    TreeNode* balBST(vector<int>& vec, int start, int end){
        if(start >= end){
            // TreeNode* root = new TreeNode;
            // int mid = start + (end-start)/2;
            // root->val=vec[mid];
            return NULL;
        }
        
        int mid = start + (end-start)/2;;
        
        
        TreeNode* root = new TreeNode;
        root->val = vec[mid];
        TreeNode* left = balBST(vec,start,mid);
        TreeNode* right = balBST(vec,mid+1,end);
        if(left != nullptr || right != nullptr){
            root->left = left;
            root->right = right;
            
        }
        return root;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> vec;
        
        while( head != NULL){
            vec.push_back(head->val);
            head = head->next;
        }
        
        
        int n = vec.size();
        return balBST(vec,0,n);
    }
};
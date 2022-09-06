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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        vector<int> list;
        
        while(temp != NULL){
            list.push_back(temp->val);
            temp = temp->next;
        }
        
//         for(auto it : list)
//             cout << it << " ";
        
        int n = list.size();
        for(int i = 0; i < n/2; i++){
            if(list[i] != list[n-i-1])
                return false;
        }
        
        
        return true;
    }
};
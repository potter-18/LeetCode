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
    ListNode* deleteMiddle(ListNode* head){
        if(head->next == nullptr){
            return nullptr;
        }
        
        ListNode* temp1 = head, *temp2 = head->next->next;
        
        while(temp2 != nullptr && temp2->next != nullptr ){
            temp1 = temp1->next;
            temp2 = temp2->next->next;
        }
        temp1->next = temp1->next->next;
        return head;
        
    }
};
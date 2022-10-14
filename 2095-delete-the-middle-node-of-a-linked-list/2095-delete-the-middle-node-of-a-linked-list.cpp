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
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        int n = 0;
        if(head->next == nullptr){
            return nullptr;
        }
        while(temp1 != nullptr){
            n++;
            temp1 = temp1->next;
        }
        for(int i = 0; i < n/2-1; i++){
            temp2 = temp2->next;
        }
        temp2->next = temp2->next->next;
        return head;
        
    }
};
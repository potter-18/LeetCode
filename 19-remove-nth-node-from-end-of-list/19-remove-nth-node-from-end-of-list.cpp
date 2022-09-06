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
    ListNode* removeNthFromEnd(ListNode* head, int m) {
        
        ListNode *temp = head;
        int n = 0;
        
        while(temp != NULL){
            n++;
            temp = temp->next;
        }
        temp = head;
        
        if(m == n){
            head = head->next;
            // delete(temp);
            return head;
        }
        
        int dis = n-m;
        ListNode* curr;
        while(dis--){
            curr = temp;
            temp = temp->next;
        }
        
        curr->next = curr->next->next;
        // delete(temp);
        
        return head;
    }
};
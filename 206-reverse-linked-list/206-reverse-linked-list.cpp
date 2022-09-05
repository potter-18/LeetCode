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
    ListNode* reverseList(ListNode* head) {
        ListNode *nhead;
        ListNode *t = head;
        vector<ListNode *> temp;
        if(head == NULL){
            return NULL;
        }
        while(t->next != NULL){
            temp.push_back(t);
            t = t->next;
        }
        temp.push_back(t);
        
        int n = temp.size();
        nhead = temp[n-1];
        ListNode *q = nhead;
        for(int j = n-1; j >= 0; j--){
            q->next = temp[j];
            q = q->next;
        }
        
        q->next = NULL;
        
        return nhead;
    }
};
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head){
        if(head == nullptr){
            return head;
        }
        unordered_map<Node*,int> m;
        Node* curr = head;
        Node* newHead = new Node(curr->val);
        Node* temp = newHead;
        int ind = 0;
        m[curr] = ind++;
        curr = curr->next;
        while(curr){
            temp->next = new Node(curr->val);
            temp = temp->next;
            m[curr] = ind++;
            curr = curr->next;
        }
        
        curr = head;
        temp = newHead;
        Node* temp1 = newHead;
        
        while(curr){
            if(curr->random){
                for(int i= 0; i < m[curr->random]; i++){
                    temp1 = temp1->next;
                }
                temp->random = temp1;
                temp1 = newHead;
            }
            temp = temp->next;
            curr = curr->next;
        }
        return newHead;
    }
};
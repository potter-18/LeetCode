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
        unordered_map<Node*,int> m1;
        unordered_map<int,Node*> m2;
        Node* curr = head;
        Node* newHead = new Node(curr->val);
        Node* temp = newHead;
        int ind = 0;
        m2[ind] = temp;
        m1[curr] = ind;
        
        curr = curr->next;
        while(curr){
            ind++;
            temp->next = new Node(curr->val);
            temp = temp->next;
            m2[ind] = temp;
            m1[curr] = ind;
            curr = curr->next;
        }
        
        curr = head;
        temp = newHead;
        
        while(curr){
            if(curr->random){
                temp->random = m2[m1[curr->random]];
            }
            curr = curr->next;
            temp = temp->next;
        }
        
        return newHead;
    }
};
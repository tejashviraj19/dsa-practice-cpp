/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        if(!head || !head->next) return head;

        Node *prev = NULL;
        Node *curr = head;
        
        int it = 0;
        while(curr && it < k){
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            it++;
        }
        
        
        head->next = reverseKGroup(curr,k);
        return prev;
    }
};

/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        if(head == nullptr) return nullptr;
        
        int cnt0=0,cnt1=0,cnt2=0;
        Node* temp = head;
        while(temp!=nullptr) {
            if(temp->data == 0) cnt0++;
            if(temp->data == 1) cnt1++;
            if(temp->data == 2) cnt2++;
            temp = temp->next;
        }
        
        temp = head;
        while(temp != nullptr) {
            if(cnt0 != 0) {
                temp->data=0;
                cnt0--;
            }
            else if(cnt1!=0) {
                temp->data=1;
                cnt1--;
            } else if(cnt2!=0){
                temp->data=2;
                cnt2--;
            }
            temp = temp->next;
        }
        
        return head;
        
    }
};

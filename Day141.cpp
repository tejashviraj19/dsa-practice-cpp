/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int findMedian(Node* root) {
        // Code here
        Node* curr = root;
        int nodes = 0;
        while(curr != nullptr){
            if(curr->left == nullptr){
                curr=curr->right;
                nodes++;
            }
            else{
                Node* pred = curr->left; // inorder predecessor
                while(pred->right != nullptr and pred->right != curr){
                    pred = pred->right;
                }
                if(pred->right == curr){
                    pred->right = nullptr;
                    curr = curr->right;
                    nodes++;
                }
                else{
                    pred->right = curr;
                    curr = curr->left;
                }
            }
        }
        
        // Finding the median using moris traversal
        int med = nodes/2 + (nodes%2);
        curr = root;
        nodes = 0;
        while(curr != nullptr){
            if(curr->left == nullptr){
                nodes++;
                if(nodes == med){
                    break;
                }
                
                curr=curr->right;
            }
            else{
                Node* pred = curr->left; // inorder predecessor
                while(pred->right != nullptr and pred->right != curr){
                    pred = pred->right;
                }
                if(pred->right == curr){
                    nodes++;
                    if(nodes == med){
                        break;
                    }
                    pred->right = nullptr;
                    curr = curr->right;
                }
                else{
                    pred->right = curr;
                    curr = curr->left;
                }
            }
        }
        
        return curr->data;
    }
};

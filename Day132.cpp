/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to return a list containing the postorder traversal of the tree.
    vector<int> postOrder(Node* root) {
        Node*  temp=root;
        vector<int> ans;
        if(temp==NULL)return ans;
        
        vector<int> left=postOrder(temp->left);
        vector<int> right=postOrder(temp->right);
        ans.insert(ans.end(),left.begin(),left.end());
        ans.insert(ans.end(),right.begin(),right.end());
        ans.push_back(temp->data);
        return ans;
    }
};

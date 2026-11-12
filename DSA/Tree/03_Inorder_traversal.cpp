#include <iostream>

#include <vector>

using namespace std;
class Node{
    public: 
        int data;
        Node* leftNode;
        Node* RightNode;
        Node(int val){
            data = val;
            leftNode = RightNode = NULL;
        }
};
static int index = -1;
Node* buildTree(vector<int> sequence){
    index++;
    if(sequence[index] == -1){
        return NULL;
    }

    Node* root = new Node(sequence[index]);
    root->leftNode = buildTree(sequence);
    root->RightNode = buildTree(sequence);
    return root;
}
//InOrderTraversal is used to track the nodes in the tree using the root 
void InOrdertraversal(Node* root){
    //if the root is empy just return
    if(root == NULL){
        return;
    }
    //go to the left of the root unless we find the leaf
    InOrdertraversal(root->leftNode);
    //printing the data at the root
    cout<<root->data<< " ";
    //go to the right of the root unless we find the leaf
    InOrdertraversal(root->RightNode);
}
int main(){
    vector<int> Inorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(Inorder);
    InOrdertraversal(root);
    cout<<endl;
    return 0;
}
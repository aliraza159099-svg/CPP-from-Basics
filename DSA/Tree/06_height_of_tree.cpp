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
    //the base condition
    if(sequence[index] == -1){
        return NULL;
    }

    Node* root = new Node(sequence[index]);
    root->leftNode = buildTree(sequence);
    root->RightNode = buildTree(sequence);
    return root;
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftMax = height(root->leftNode);
    int rightMax = height(root->RightNode);
    return max(rightMax, leftMax) + 1;
}

int main(){
    vector<int> Inorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(Inorder);
    cout<<"The height of the tree is : "<<height(root);
    cout<<endl;
    return 0;
}
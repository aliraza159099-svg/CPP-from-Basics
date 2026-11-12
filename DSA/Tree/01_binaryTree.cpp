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
int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(preorder);
    cout<<"Root data : "<<root->data<<endl;
    cout<<"Left data : "<<root->leftNode->data<<endl;
    cout<<"Left data : "<<root->RightNode->data<<endl;
    return 0;
}
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
int sum =  0;
int sumofNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    sum = sum + root->data;
    int left = sumofNodes(root->leftNode);
    int right = sumofNodes(root->RightNode);
    return sum;
}

int main(){
    vector<int> treeSeq = {1, 2, 3, 4, -1, -1, -1, 5, 6, -1, -1, -1, 7, 8, -1, 9, -1, -1, 10, 11, -1, -1, 12, -1, -1};
    Node* root = buildTree(treeSeq);
    cout<<"The sum of the sumofNodes of the tree is : "<<sumofNodes(root);
    cout<<endl;
    return 0;
}
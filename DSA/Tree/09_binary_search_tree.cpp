#include <iostream>
#include <vector>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    } 
};

Node* insert(Node* root, int val){
    if(root == NULL){
        return new Node(val);
    }
    if(val < root->data){
        root->left = insert(root->left, val);
    }else if(val > root->data){
       root->right =  insert(root->right, val);
    }
    return root;
}

Node* buildBST(vector<int> arr){
    Node* root = NULL;
    for(int val : arr){
       root = insert(root, val);
    }
    return root;
}
//printing using pre order traversal
void preOrdertraversal(Node* root){
    //if the root is empy just return
    if(root == NULL){
        return;
    }
    
    //go to the left of the root unless we find the leaf
    preOrdertraversal(root->left);
    //printing the data at the root
    cout<<root->data<< " ";
    //go to the right of the root unless we find the leaf
    preOrdertraversal(root->right);
}
int main(){
    vector<int> arr = {43,86,12,53,9,23,54,23,56,34,987,231};
    Node* root = buildBST(arr);
    preOrdertraversal(root);
    cout<<endl;

}
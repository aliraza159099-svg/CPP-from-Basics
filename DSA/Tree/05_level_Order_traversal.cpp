#include <iostream>

#include <vector>

#include <queue>

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
//levelOrderTraversal is used to track the nodes in the tree using the root 
void levelOrder(Node* root)
{
    //if the root is null then there is noting in the queue so we retuen from here
    if (root == NULL) return;
    //creating a Queue to stores the nodes
    queue<Node*> Q;
    //push the root as the first element of the queue
    Q.push(root);  
    //while there left no element in the Queue we traverse the tree level wise
    while(Q.size() > 0){
        //curr holds the address of the current fron,  that changes in each iteration
        Node* curr = Q.front();
        //pop the current 
        Q.pop();
        //printing the current data
        cout<<curr->data<<" ";
        if(curr->leftNode != NULL){
            Q.push(curr->leftNode);
        }
        if(curr->RightNode != NULL){
            Q.push(curr->RightNode);
        }
    }
    cout<<endl; 
}
int main(){
    vector<int> Inorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    Node* root = buildTree(Inorder);
    levelOrder(root);
    cout<<endl;
    return 0;
}
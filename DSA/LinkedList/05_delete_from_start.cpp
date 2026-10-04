#include <iostream>
using namespace std;
//struct to form a node to store the data and the address of the next node
struct Node
{
    int data;//the actual value 
    Node* next;//Pointer to store the address of the node
};
typedef Node* nodeptr;

int main(){
    //creating the first node dynamiaclly
    nodeptr firstNode = new Node;
    nodeptr head = new Node;
    //lets create multiple nodes
    nodeptr secondNode = new Node;
    nodeptr thirdNode = new Node;
    nodeptr forthNode = new Node;
    nodeptr fifthNode = new Node;

    firstNode->data = 10;
    firstNode->next = secondNode;

    secondNode->data = 12;
    secondNode->next = thirdNode;

    thirdNode->data = 13;
    thirdNode->next = forthNode;

    forthNode->data = 99;
    forthNode->next = fifthNode;

    fifthNode->data = 63;
    fifthNode->next = NULL;
    //delete the first emelemt of the list
    
    //temp storing the head address
    head = firstNode->next;
    nodeptr temp = new Node;
    delete temp;
    
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        //storing the address of next in temp
        temp = temp->next;
    }
    return 0;
}
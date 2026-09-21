#include <iostream>
using namespace std;
//struct to form a node to store the data and the address of the next node
struct Node
{
    int data;//the actual value 
    Node* next;//Pointer to store the address of the node
};
typedef Node* noteptr;

int main(){
    //creating the first node dynamiaclly
    Node* firstNode = new Node;
    //lets create multiple nodes
    Node* secondNode = new Node;
    Node* thirdNode = new Node;
    Node* forthNode = new Node;

    firstNode->data = 10;
    firstNode->next = secondNode;

    secondNode->data = 12;
    secondNode->next = thirdNode;

    thirdNode->data = 13;
    thirdNode->next = forthNode;

    forthNode->data = 99;
    forthNode->next = NULL;
    //temp storing the head address
    noteptr temp = firstNode;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        //storing the address of next in temp
        temp = temp->next;
    }
    


    return 0;
}
#include <iostream>
#include <string>
using namespace std;


//struct to create the nodes
struct Node{
    int data;
    Node* next;
    Node* prev;
};
typedef Node* nodeptr;
int main(){
    //creating a node
    nodeptr node1 = new Node;
    nodeptr node2 =  new Node;
    node2->data = 23;
    node1->data = 12;
    nodeptr head;
    head = node1;
    nodeptr temp;
    node1->next = node2;
    node2->prev = node1;
    node2->next = head;

    temp = head;
    while(temp!=head->prev){
        cout<<temp->data<<endl;
        temp = temp->next;
    }

    return 0;
}
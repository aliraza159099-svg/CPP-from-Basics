#include <iostream>
using namespace std;
//node creation
struct Node{
    int data;
    Node* next;
    Node* prev;
};
typedef Node* nodeptr;

int main(){
    nodeptr dummy = new Node;
    nodeptr node1 = new Node;
    nodeptr node2 = new Node;
    node1->data = 12;
    node2->data = 23;
    dummy->next = node1;
    dummy->prev = node2;
    node1->next = node2;
    node1->prev = dummy;

    node2->prev = node1;
    node2->next = dummy;

    //tracversing the doubly linked list
    nodeptr temp;
    temp = dummy->next;
    while(temp!=dummy){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<dummy->data<<endl;
    return 0;
}

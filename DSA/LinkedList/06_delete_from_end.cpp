#include <iostream>
using namespace std;

//creating node
struct  Node
{
    int data;
    Node* next;
};
typedef Node* nodeptr;


int main(){
    nodeptr n1 = new Node;
    nodeptr n2 = new Node;
    nodeptr n3 = new Node;
    nodeptr n4 = new Node;
    nodeptr n5 = new Node;
    nodeptr temp = new Node;
    n1->data = 1;
    n2->data = 3;
    n3->data = 5;
    n4->data = 7;
    n5->data = 9;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    //deleting the end node
    nodeptr head = n1;
    temp = head;
    while (temp->next!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    

    return 0;
}
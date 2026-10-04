#include <iostream>
#include <string>
using namespace std;

//struct to create the nodes
struct Node {
    int data;
    Node* next;
    Node* prev;
};
typedef Node* nodeptr;
//insert Function
void deleteNode(Node* head, int value){
    nodeptr cur;
    int found = 0;
    cur = head;
    if(head==NULL){
        return ;
    }else{
        while(cur!=NULL && found!=1){
            if(cur->data == value){
                //not work if the head is meant to remove but work properly for the middle and end nodes
                (cur->prev)->next = cur->next;
                (cur->next)->prev = cur->prev;
                found = 1;
                cout<<"Node deleted successfully"<<endl;
                delete cur;
            }else{
            cur = cur->next;
             }
        }
    }
}

int main() {
    //creating nodes
    nodeptr node1 = new Node;
    nodeptr node2 = new Node;
    nodeptr node3 = new Node;
    nodeptr node4 = new Node;
    nodeptr node5 = new Node;
    nodeptr node6 = new Node;
    node1->data = 12;
    node2->data = 23;
    node3->data = 54;
    node4->data = 32;
    node5->data = 63;
    node6->data = 84;



    nodeptr head = node1;
    head->prev = NULL;
    node6->next = NULL;
    nodeptr temp;

    //connecting the nodes with each other
    node1->next = node2;
    node1->prev = NULL;

    node2->prev = node1;
    node2->next = node3;

    node3->next = node4;
    node3->prev = node2;

    node4->next = node5;
    node4->prev = node3;

    node5->next = node6;
    node5->prev = node4;

    node6->prev = node5;
    //node6 ka next is null

    //traversing the circular doubly linked list
    temp = head;
    deleteNode(head, 63);
    deleteNode(head, 32);
    //using do wile we can traverse the list
    do {
        cout << temp->data << endl;
        temp = temp->next;
    } while (temp != head);

    return 0;
}
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
int main() {
    //creating nodes
    nodeptr node1 = new Node;
    nodeptr node2 = new Node;
    nodeptr node3 = new Node;
    node1->data = 12;
    node2->data = 23;
    node3->data = 54;


    nodeptr head = node1;
    nodeptr temp;

    //connecting the nodes with each other
    node1->next = node2;
    node1->prev = NULL;

    node2->prev = node1;
    node2->next = node3;

    node3->next = NULL;
    node3->prev = node2;

    //traversing the circular doubly linked list
    temp = head;
    //using do wile we can traverse the list
    do {
        cout << temp->data << endl;
        temp = temp->next;
    } while (temp != NULL);
    return 0;
}
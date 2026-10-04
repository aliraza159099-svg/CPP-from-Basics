#include <iostream>
using namespace std;
//node creation
struct Node{
    int data;
    Node* next;
    Node* prev;
};
typedef Node* nodeptr;
//function to add a new node in to the list
void insertNode(Node* head, int value){
    Node* cur;
    if (head == NULL)
    {
        return;
    }
    
    cur = searchNode(value,head);
    while (cur!=head)
    {
        // if(){
            
        // }
    }
    

    
}
//searchNode function to search the neighbour node of the adding one
Node* searchNode(int num, Node* head){
    Node* temp;
    temp = head->next;
    while(temp!=head){
        if(num>(temp->data) && num<((temp->next)->data)){
            return temp;
        }else{
            temp = temp->next;
        }
    }
}
int main(){
    nodeptr dummy = new Node;
    nodeptr node1 = new Node;
    nodeptr node2 = new Node;
    nodeptr head;
    head = dummy;
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

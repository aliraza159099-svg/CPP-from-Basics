#include <iostream>
using namespace std;
//applying stack using linked list
//Node
struct  Node
{
    int data;
    Node* next;
};
typedef Node* nodeptr;
//push function to add an elemet into the list
void push(int item,nodeptr &top){
    nodeptr newNode = new Node;

    newNode->next = top;
    newNode->data = item;
    top = newNode;
}
//pop method to pop the top
void pop(nodeptr &top){
    if(top!=NULL){
        nodeptr temp = top;
        cout<<top->data<<" deleted successfully."<<endl;
        top = temp->next;
        delete temp;
    }else{
        cout<<"The stack is empty"<<endl;
    }
}
//display function to list the array or list
void display(nodeptr top){
    if(top == NULL){
        cout<<"The stack is empty"<<endl;
        return;
    }else{
        cout<<"[ ";
        while(top != NULL){
            cout<<top->data;
            if(top->next!=NULL){
                cout<<", ";
            }
            top = top->next;
        }
        cout<<"]"<<endl;
    }
}
int main(){
    nodeptr top = NULL;
    cout<<"Implementing stack using Linked List"<<endl;
    bool condition = true;
    int choice;
    int num;
    while(condition){
        cout<<"1. Push an element."<<endl;
        cout<<"2. Pop an element."<<endl;
        cout<<"3. Dispaly."<<endl;
        cout<<"4. Exit."<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        if(choice == 1){
            cout<<"Enter the element : ";
            cin>>num;
            push(num,top);
        }else if(choice == 2){
            pop(top);
        }else if(choice == 3){
            display(top);
        }else if(choice == 4){
            condition = false;
        }else{
            cout<<"Enter a valid choice ."<<endl;
        }
    }
    return 0;
}
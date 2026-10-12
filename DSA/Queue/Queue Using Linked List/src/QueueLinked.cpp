#include "QueueLinked.h"
#include <iostream>
#include <string>
using namespace std;

QueueLinked::QueueLinked()
{
    front = rear = NULL;
    counter = 0;
}

QueueLinked::~QueueLinked()
{
   while (!empty())
    dequeue(); //free each node memory, until the queue became empty as dequeue free the memory of the node
}
//if the counter is 0 means the queue is empty
bool QueueLinked::empty() const{
    return counter == 0;
}
//this method is to insert an item on the rear of the queue
void QueueLinked::enqueue(double x){
    QNode* newNode = new QNode;//making a new node to be added on the queue
    newNode->data = x;//populating the node
    newNode->next = NULL;
    //if the queue is empty then the newNode is the front and rear
    if(empty()){
        front = newNode;
        rear = newNode;
        counter++;
        } //first node
    else{
        rear->next = newNode;//link with last current node
        rear = newNode;
        counter++;
        }
}
//this method will pop the element from the front of the queue
double QueueLinked::dequeue(){
    //if the queue is empty no concept of removing any element
     if(empty()){
        cout <<"Queue is empty" <<endl;
        return -1;
}else{
    double x = front->data;
    QNode* nextNode = front->next;
    delete front;
    front = nextNode;
    counter--;
    return x;
}
}
//its just returning the value of counter
int QueueLinked::length() const{
    return counter;//counter is having the length of the queue
}
//to print this method is used
void QueueLinked::print() const{
    cout<<"front-->";
    QNode* curr = front;
    while (curr !=NULL){
        cout<<"\t"<< curr->data;
        curr = curr->next;
    }
    cout<<"\t<-- rear" <<endl;

}

#include "CircularQueue.h"

CircularQueue::CircularQueue()
{
    front = -1;
    rear = -1;
    count = 0;
}

CircularQueue::~CircularQueue()
{
    //dtor
}

//endueing means adding an element to the rear of the queue
void CircularQueue::enqueue(double x){
    if(count == size){
        cout<<"___The array is full___"<<endl;
        return;
    }else{
        rear = (rear+1)%size;
        arr[rear] = x;
        count++;
    }
}

void CircularQueue::dequeue(int size)const{
    if(count =< 0){
            cout<<"the queue is empty"<<endl;
            return ;
        }else{
            front = (front+1)%size;
            count--;
        }
}















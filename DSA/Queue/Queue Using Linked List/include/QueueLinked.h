#ifndef QUEUELINKED_H
#define QUEUELINKED_H

struct QNode{
    double data;
    QNode* next;

};

class QueueLinked
{
    public:
         QueueLinked();//constructor
         virtual ~QueueLinked();// destructor
         bool empty() const;
         bool full() const;
        //these are true if queue is empty or full
         void enqueue(double x);//for adding element
         double dequeue();
         int length() const;
         void print() const;//for displaying elements


    private:
        QNode* front;// Pointer to front node
        QNode* rear;//pointing the last Element os the list
        int counter;//counting the number of the nodes or elements in the queue
};

#endif // QUEUELINKED_H

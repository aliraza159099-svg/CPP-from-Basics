#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H


class CircularQueue
{
    public:
        CircularQueue();
        virtual ~CircularQueue();
        void enqueue(double x);
        void dequeue() const;
        bool empty() const;
        void full() const;

    protected:

    private:
        static const int SIZE = 5;
        double arr[SIZE];
        int front;
        int rear;
        int count;
};

#endif // CIRCULARQUEUE_H

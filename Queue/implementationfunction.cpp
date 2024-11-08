#include <iostream>
using namespace std;

int front = -1;
int rear = -1, capacity;
int *queue;
void initializeQueue(int size)
{
    capacity = size;
    queue = new int[capacity];
}
bool isEmpty()
{
    return front == -1;
}
bool isFull()
{
    return front == capacity - 1;
}
void enqueue(int value)
{
    if (isFull())
    {
        cout << "queue is full" << endl;
    }
    if (isEmpty())
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = value;
    cout << value << " " << "enqueued to the queue" << endl;
}
void dequeue()
{
    if (isEmpty())
    {
        cout << "queue is empty" << endl;
        return;
    }
    cout << queue[front] << " " << "dequeued from queue" << endl;
    if (rear == front)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}
void display()
{
    if (isEmpty())
    {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "queue elements:";
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }
    cout << endl;
}
int main(){
    initializeQueue(5);
    enqueue(22);
    enqueue(32);
    enqueue(42);
    enqueue(52);
    enqueue(62);
    display();
    dequeue();
    dequeue();

    dequeue();
    display();


}
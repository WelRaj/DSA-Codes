#include<iostream>
using namespace std;
class Queue{
    int front ,rear,capacity;
    int * queue;
    public:
    Queue(int size){
        capacity=size;
        front=rear=-1;
        queue=new int[capacity];
    }
    ~Queue(){
            delete[] queue;
        }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return front==capacity-1;
    }
    void enqueue(int value){
        if(isFull()){
            cout<<"queue is full"<<endl;
        }
        if(isEmpty()){
            front=rear=0;

        }
        else{
            rear++;
        }
        queue[rear]=value;
        cout<<value<<" "<<"enqueued to the queue"<<endl;
    }
    void dequeue(){
        if(isEmpty()){
            cout<<"queue is empty"<<endl;
            return;
        }
        cout<<queue[front]<<" "<<"dequeued from queue"<<endl;
        if(rear==front){
            front=rear=-1;
        } else {
            front++;
        }
    }
    void display(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"queue elements:";
        for(int i=front; i<=rear; i++){
            cout<<queue[i]<<" ";
        }
        cout<<endl;
    }
    };
    int main(){
        Queue q(6);
        q.enqueue(20);
        q.enqueue(22);
        q.enqueue(23);
        q.enqueue(25);
        q.enqueue(26);
        q.enqueue(29);
        q.display();
        q.dequeue();
        q.dequeue();
        q.dequeue();
        q.display();
        return 0;

    }

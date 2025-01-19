#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    q.push(11);
    q.push(31);
    q.push(131);
    q.push(12);

    cout<<"size of queue:"<<q.size()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is full"<<endl;
    }
    
}
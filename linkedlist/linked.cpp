#include<bits/stdc++.h>
using namespace std;
 struct node{
            int data;
            node *next;
            node(int data1,node *next1){
                data=data1;
                next =next1;
            }
           };
int main(){
    vector<int>arr={2,3,4,6,};
    node *y=new node(arr[3],nullptr);
    cout<<y->data<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

struct node {
    public:
        int data;
        node *next;
        node *prev;
        node *back;
        node(int data1, node *next1 = nullptr, node *prev1 = nullptr, node *back1 = nullptr) {
            data = data1;
            next = next1;
            prev = prev1;
            back = back1;
        }
};

node* arrtoDLL(vector<int>& arr) {
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++) {
        node *temp = new node(arr[i], nullptr, prev, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
node * insertathead(node* head,int m){
     node *newnode= new node(m);
     newnode->next=head;
     head=newnode;
     newnode->prev=nullptr;
     return head;
}
node * insertatend(node*head,int n){
    node *newnode = new node(n);
    node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=nullptr;
    temp->next=newnode;
    newnode->next=nullptr;
    return head;
}
node *insert_kth_position(node *head,int p,int k){
          if(head==NULL){
            return head;
          }
          node* temp=head;
          int c=1;
          while(temp!= nullptr && c<p){
               c++;
               temp=temp->next;
          }
          if(p==1){
            return insertathead(head,k);
          }
          else if(temp->next==NULL){
            return insertatend(head,k);
          }
          else{
               node *newnode= new node(k);
               newnode->next=temp;
               newnode->prev=temp->prev;
               if (temp->prev != nullptr) { 
                 temp->prev->next = newnode;
          } 
              temp->prev=newnode;
               
               return head;

          }}
int main() {
    vector<int> arr = {6, 3, 1, 2, 3, 4, 6};
    node* head = arrtoDLL(arr);
    node* head1 = insert_kth_position(head,6,9);
    node* temp = head1;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}
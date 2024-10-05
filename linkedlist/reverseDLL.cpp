#include<iostream>
#include<vector>
using namespace std;
struct node {
    public:
        int data;
        node *next;
        node *prev;
        node(int data1, node *next1 = nullptr,node*prev1 =nullptr) {
            data = data1;
            next = next1;
            prev = prev1;
        }
};
node* arrtoDLL(vector<int>&arr){
    node *head=new node(arr[0]);
    node *prev=head;
    for(int i=1; i<arr.size(); i++){
        node *temp= new node(arr[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
  return head;
}
node* reverseDLL(node* head){
    if(head==nullptr){
        return head;
    }
    node* temp= nullptr;
    node* current=head;
    while(current!=nullptr){
        temp=current->prev;
        current->prev=current->next;
        current->next=temp;
        current=current->prev;
    }
    if(temp!=nullptr){
        head=temp->prev;
    }
     return head;
    }

int main(){
    vector<int> arr = {2, 3, 4, 6};
    node* head = arrtoDLL(arr);
    node* head1=reverseDLL(head); 
    node* temp = head1;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }}
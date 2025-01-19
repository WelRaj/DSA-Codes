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
int main(){
    vector<int> arr = {2, 3, 4, 6};
    node* head = arrtoDLL(arr);
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }}
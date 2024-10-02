#include<iostream>
#include<vector>
using namespace std;

struct node {
    public:
        int data;
        node *next;
        node(int data1, node *next1 = nullptr) {
            data = data1;
            next = next1;
        }
};

node* arrtoLL(vector<int> &arr) {
    if (arr.empty()) return nullptr;
    
    node* head = new node(arr[0], nullptr);
    node* mover = head;
    
    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
node* insertionatend(node * head){
    node *node2 = new node(6);
    node* temp= head;
     if (head == nullptr) {
        return node2;
    }
    while(temp->next!=nullptr){
         temp=temp->next;
    }
    temp->next=node2;
    return head;
}
node* insertionatstart(node * head){
    node * node1 =new node(6);
    node1->next=head;
    head=node1;
    
     return head;

}
node* insertAtPosition(node* head, int pos, int value) {
    node* newNode = new node(value);
    if (pos == 1) {
        newNode->next = head;
        return newNode;  // New head
    }

    node* temp = head;
    int currentPos = 1;
    while (temp != nullptr && currentPos < pos - 1) {
        temp = temp->next;
        currentPos++;
    }
    if (temp == nullptr) {
        cout << "Position out of bounds. Inserting at the end." << endl;
        return head;
    }
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}
void print(node *node1){
       node *temp =node1;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    vector<int> arr = {2, 3, 4, 6,9,9,3,4,2,3};
    int k=8;
    node* head = arrtoLL(arr);
    node* node1= insertionatstart(head);
    node* node2= insertionatend(head);
    print(node2);
    print(node1);
    int pos =5;
    int val =7;
    node* head1=insertAtPosition(head,pos,val);
    print(head1);
    return 0;
}

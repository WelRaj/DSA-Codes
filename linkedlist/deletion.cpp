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
    mover->next=nullptr;
    return head;
}

node* deletion(node* head, int pos) {
    
    if (head == nullptr) {
        return head;
    }

    
    if (pos == 1) {
        node* temp = head;
        head = head->next;  
        delete temp;  
        return head;
    }

    node* temp = head;
    int currentPos = 1;

    
    while (temp != nullptr && currentPos < pos - 1) {
        temp = temp->next;
        currentPos++;
    }

   
    if (temp == nullptr || temp->next == nullptr) {
        return head;
    }

    
    node* deletenode = temp->next;
    temp->next = deletenode->next;  
    delete deletenode;  

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
   
    node* head = arrtoLL(arr);
    int pos =5;
     head=deletion(head,pos);
    print(head);
    return 0;
}

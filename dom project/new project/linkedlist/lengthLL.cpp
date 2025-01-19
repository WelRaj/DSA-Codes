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
int lengthLL(node *head){
     node* temp = head;
     int count=0;
    while (temp != nullptr) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    vector<int> arr = {2, 3, 4, 6,9,9,3,4,2,3};
    node* head = arrtoLL(arr);
    int l= lengthLL(head);
    cout<<l<<endl;
   
    return 0;
}

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
int searchLL(node *head, int k) {
    node* temp = head;
    while (temp != nullptr) {
        if (temp->data == k) {
            cout << "Found" << endl;
            return 1;
        }
        temp = temp->next;
    }
    
    cout << "Not found" << endl;
    return 0;  
}
int main() {
    vector<int> arr = {2, 3, 4, 6,9,9,3,4,2,3};
    int k=6;
    node* head = arrtoLL(arr);
    searchLL(head,k);
    
   
    return 0;
}

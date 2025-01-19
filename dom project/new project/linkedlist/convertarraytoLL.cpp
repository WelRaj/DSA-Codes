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

int main() {
    vector<int> arr = {2, 3, 4, 6};
    node* head = arrtoLL(arr);
    node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    
    return 0;
}

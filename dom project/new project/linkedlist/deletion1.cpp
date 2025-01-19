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

// Convert vector to linked list
node* arrtoLL(vector<int> &arr) {
    if (arr.empty()) return nullptr;
    
    node* head = new node(arr[0], nullptr);
    node* mover = head;
    
    for (int i = 1; i < arr.size(); i++) {
        node* temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    mover->next = nullptr;
    return head;
}

// Delete node at position
node* deletion(node* head, int pos) {
    if (head == nullptr) {
        return head;
    }

    // Special case: delete the head node
    if (pos == 1) {
        node* temp = head;
        head = head->next;  // Move head to next node
        delete temp;  // Free memory
        return head;
    }

    node* temp = head;
    int currentPos = 1;

    // Traverse to the node before the one we want to delete
    while (temp != nullptr && currentPos < pos - 1) {
        temp = temp->next;
        currentPos++;
    }

    // Debug: Print the current node before deletion
    if (temp != nullptr) {
        cout << "Current node before deletion: " << temp->data << endl;
    }

    // If the position is invalid (i.e., beyond the length of the list)
    if (temp == nullptr || temp->next == nullptr) {
        return head;
    }

    // Perform deletion
    node* deletenode = temp->next;
    temp->next = deletenode->next;  // Skip the node to delete
    delete deletenode;  // Free the memory of the deleted node

    return head;
}

// Print linked list
void print(node *node1) {
    node *temp = node1;
    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr = {2, 3, 4, 6, 9, 9, 3, 4, 2, 3};
   
    node* head = arrtoLL(arr);  // Create the linked list
    int pos = 5;  // Specify the position to delete
    head = deletion(head, pos);  // Update the head with the new list
    print(head);  // Print the list after deletion
    
    return 0;
}

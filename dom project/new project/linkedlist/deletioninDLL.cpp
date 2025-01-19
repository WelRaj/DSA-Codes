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

node* deletehead(node *head) {
    if (head == nullptr) return nullptr;
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }
    node *newHead = head->next;
    newHead->prev = nullptr;
    newHead->back = nullptr;  
    delete head;
    return newHead;
}

node* deleteatend(node *head) {
    if (head == nullptr) return nullptr;
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }
    node *tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    node *newtail = tail->back;
    newtail->next = nullptr;
    delete tail;
    return head;
}

node* deletionDLL(node *head, int k) {
    if (head == nullptr) return nullptr;
    if (k == 1) return deletehead(head);

    node *temp = head;
    int c = 1;

    while (temp != nullptr && c < k) {
        c++;
        temp = temp->next;
    }

    if (temp == nullptr) {
    
        return head;
    }

    node *prev = temp->back;
    node *front = temp->next;

    if (prev == nullptr && front == nullptr) {
        delete temp;
        return nullptr;
    }

    if (prev == nullptr) {
        return deletehead(temp);
    }

    if (front == nullptr) {
        return deleteatend(temp);
    }

    prev->next = front;
    front->back = prev;
    delete temp;
    return head;
}

int main() {
    vector<int> arr = {6, 3, 1, 2, 3, 4, 6};
    node* head = arrtoDLL(arr);
    node* head1 = deletionDLL(head, 2);
    node* temp = head1;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    return 0;
}                    

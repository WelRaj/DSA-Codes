#include<iostream>
using namespace std;
class Node{
    public:
       int data;
       Node *left;
       Node *right;

     Node(int val){
           data=val;
           left=nullptr;
           right=nullptr;
     }
};
void print(Node *node){
    if(node==NULL){
        return;
    }
    print(node->left);
    cout<<node->data<<endl;
    print(node->right);
}
int main(){
       Node* firstNode= new Node(4);
       Node* secondNode= new Node(9);
       Node* thirdNode= new Node(7);
       Node* fourthNode= new Node(8);
       Node* fifthNode= new Node(42);
       firstNode->left = secondNode;
        firstNode->right = thirdNode;
       secondNode->left = fourthNode;
       secondNode->right= fifthNode;
       print(firstNode);

}
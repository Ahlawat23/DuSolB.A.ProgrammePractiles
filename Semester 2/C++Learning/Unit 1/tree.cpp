#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int value) : data(value), left(nullptr), right(nullptr)
   {   }
};

void inOrderTraversal(Node* root){
    if(root != nullptr){
        inOrderTraversal(root->left);
        cout<< root->data << " ";
        inOrderTraversal(root->right);
    }
}

void preOrderTraversal(Node* root){
    if(root != nullptr){
        cout<< root->data << " ";
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
}

void postOrderTraversal(Node* root){
    if(root != nullptr){   
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        cout<< root->data << " ";
    }
}
   

int main(){
    
    return 0;
}
// #include <stdio.h>
// #include <stdlib.h>


// struct node {
//     int data;
//     struct node* left;
//     struct node* right;
// };


// struct node* create(int data) {
//     struct node* newnode = (struct node*)malloc(sizeof(struct node));
//     if (newnode == NULL) {
//         printf("Memory allocation failed\n");
//         return NULL;
//     }
//     newnode->data = data;
//     newnode->left = NULL;
//     newnode->right = NULL;
//     return newnode;
// }


// struct node* insert(struct node* root, int data) {
//     if (root == NULL) {
//         return create(data);
//     }

//     if (data < root->data) {
//         root->left = insert(root->left, data);
//     } else if (data > root->data) {
//         root->right = insert(root->right, data);
//     }

//     return root; 
// }


// int search(struct node* root, int data) {
//     if (root == NULL) {
//         return 0; 
//     }

//     if (data == root->data) {
//         return 1; 
//     } else if (data < root->data) {
//         return search(root->left, data); 
//     } else {
//         return search(root->right, data); 
//     }
// }


// int main() {
//     struct node* root = NULL; 

    
//     root = insert(root, 50);
//     root = insert(root, 30);
//     root = insert(root, 20);
//     root = insert(root, 40);
//     root = insert(root, 70);
//     root = insert(root, 60);
//     root = insert(root, 80);

    
//     int value = 40;
//     if (search(root, value)) {
//         printf("Node with value %d found in the BST.\n", value);
//     } else {
//         printf("Node with value %d not found in the BST.\n", value);
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;

    public:
        node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

node* insert(node* root , int data){

    if(root==NULL){
        return  new node(data);
    }
    if(data>root->data){
        root->right = insert(root->right , data);
    }
    else{
        root->left = insert(root->left , data);
    }
    return root;
}

int search(node* root,int data){
    
    if(root==NULL){
        return 0;
    }

    else if(data==root->data){
        return 1;
    }

    if(data > root->data){
      return search(root->right ,data);
    }
    else{
      return  search(root->left,data );
    }
}

int main() {

    node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);

   int value = 40;
    if (search(root, value)) {
        cout<<"Node with value "<<value<<" found in the BST."<<endl;
    } else {
        cout<<"Node with value "<<value<<"Not found in the BST."<<endl;
    }

    return 0;
}
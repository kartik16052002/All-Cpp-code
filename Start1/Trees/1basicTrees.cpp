#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    struct node* right;
    struct node* left;

    node(int val){
        data = val;
        right = NULL;
        left = NULL;
    }
};

void preorder(struct node* root){

    if(root == NULL) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(struct node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    /*
                    1           preorder -> 1 2 4 5 3 6 7
                   / \         
                  2   3         inorder  -> 4 2 5 1 6 3 7
                 / \ / \
                4  5 6  7       postorder-> 4 5 2 6 7 3 1
    
    */

// creating the above tree

struct node * root = new node(1);
root->left = new node(2);
root->right = new node(3);

root->left->left = new node(4);
root->left->right = new node(5);

root->right->left = new node(6);
root->right->right = new node(7);

preorder(root);
cout<<"\n";
inorder(root);
cout<<"\n";
postorder(root);

 return 0;
}
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

void postorder(struct node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i] == curr) return i;
    }
    return -1;
}

node* builTree(int inorder[],int preorder[],int start,int end){
    static int idx = 0; // pointing to prorder

    if(start>end)   return NULL;

    int curr = preorder[idx];
    idx++;
    node* root = new node(curr);
    if(start == end)    return root;
    int pos = search(inorder,start,end,curr);
    root->left = builTree(inorder,preorder,start,pos-1);
    root->right = builTree(inorder,preorder,pos+1,end);
    
}


int main(){
    // building tree from inorder and postorder
    int inorder[] = {4,2,5,1,6,3,7};
    int preorder[] = {1,2,4,5,3,6,7};
    // we will find root node from preorder then search it into inorder.
    // if find the node at pos p in the inorder then left part from p  will be left subtree and right part will be right subtree.
    // then apply recursion by sending the next idx of preorder and left/right subpart of inorder.
    node* root = builTree(inorder,preorder,0,6);
    postorder(root);

    // building tree from inorder and postorder

    // for this start from last idx of postorder and first built right sub tree


 return 0;
}
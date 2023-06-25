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

void levelOrderTraversalTree(struct node* root){
    if(root == NULL) return;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    

    while(!q.empty()){
        node* n = q.front();
        q.pop();
        if(n!=NULL){
            cout<<n->data<<" ";
            if(n->left) q.push(n->left);
            if(n->right) q.push(n->right);
            
        }else if(!q.empty()){
            q.push(NULL);
        }

    }

}

int sumAtKlevel(struct node* root,int k){
    if(root == NULL) return -1;
    int level = 0,sum = 0;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    

    while(!q.empty()){
        if(level>k) break;
        node* n = q.front();
        q.pop();
        if(n!=NULL){
            if(level == k){
                sum += n->data;
            }
            if(n->left) q.push(n->left);
            if(n->right) q.push(n->right);
            
        }else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;

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

    //levelOrderTraversalTree(root);
    cout<<sumAtKlevel(root,2);
 return 0;
}
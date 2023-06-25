#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next; // like int* ptr or int *ptr, it is also a pointer of type node

        node(int val){
            data = val;
            next = NULL;
        }
};

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void displayLL(node* head){
    node* temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<temp->data<<"->NULL"<<endl;
}

void insertAtHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}

bool seachLL(node* head, int key){
    node* temp = head; // can use head directly because not passing by reference and therfore will not change the orignal head pointer
    while(temp->next != NULL){
        if(temp->data == key)   return true;
        temp=temp->next;
    }
    return false;
}

void deleteAtHead(node* &head){
    node* temp = head;
    head = head->next;
    delete temp;
}

void deletion(node* &head,int val){
    node* temp = head;
    if(head == NULL)    return;
    if(head->next == NULL){
        deleteAtHead(head);
    }
    while(temp->next->data != val){
        temp = temp->next;
    }
    
    node* todelete = temp->next;

    temp->next = temp->next->next;

    delete todelete;
}

node* reverseIterativeLL(node* &head){
    node* prev = NULL;
    node* curr = head;
    node* nextptr = NULL; // initializing in loop

    while(curr != NULL){
        nextptr = curr->next;
        curr->next = prev;

        prev = curr;
        curr = nextptr;
    }

    return prev;
}

node* reverseRecursive(node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

node* reverseKnode(node* &head,int k){
    node* back = NULL;
    node* curr = head;
    node* front;

    int count = 0;
    while(curr!=NULL && count<k){
        front = curr->next;
        curr->next = back;
        back = curr;
        curr = front;
        count++;
    }
    if(front!=NULL){
    head->next = reverseKnode(front,k);
    }
    return back;
}

int main(){

    // ***** Basic ***** 

//    node* head = NULL; // creating which contains nothing

//    // insertion at tail
//    insertAtTail(head,1); 
//    insertAtTail(head,2); 
//    insertAtTail(head,3); 
//    insertAtTail(head,4);
//    // insertion ar head
//    insertAtHead(head,0);
//    // displaying linked list
//    displayLL(head); 

//    cout<<seachLL(head,2);
//    cout<<"\n"<<seachLL(head,5)<<"\n";

//    deleteAtHead(head);
//    deletion(head,2);
//    displayLL(head);

//    cout<<"Displaying reverse linked list\n";
//    node* newhead = reverseIterativeLL(head);
//    displayLL(newhead);


// ***** Reverse k nodes of linked list *********

node* head = new node(1);
insertAtTail(head,2);
insertAtTail(head,3);
insertAtTail(head,4);
insertAtTail(head,5);
insertAtTail(head,6);
cout<<"Given linked list is:\n";
displayLL(head);
int k = 2;
node* newnode = reverseKnode(head,k);
cout<<"Reversed:\n";
displayLL(newnode);

 return 0;
}
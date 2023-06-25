#include<bits/stdc++.h>
#include "ll.h"

using namespace std;

void makeCycle(node* head,int pos){
    node* temp = head;
    node* startnode = head;
    int count =1;
    while(temp->next != NULL){
    ;
        if(count<pos){
            startnode = startnode->next;
        }
        count++;
        temp = temp->next;
    }
    temp->next = startnode;
}

bool detectCyclell(node* head){
    node* slow = head;
    node* fast = head;

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }

    return false;
}

void removeCyclell(node* head){
    node* slow = head;
    node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast)    break;
    }

    if(fast == NULL || fast->next == NULL)  return;

    fast = head;

    while(fast->next != slow->next){
        fast = fast->next;
        slow = slow->next;
    }

    slow->next = NULL;
}



int main(){
    node* head = new node(1);
insertAtTail(head,2);
insertAtTail(head,3);
insertAtTail(head,4);
insertAtTail(head,5);
insertAtTail(head,6);
makeCycle(head,3);
cout<<detectCyclell(head)<<"\n";
removeCyclell(head);
cout<<detectCyclell(head)<<"\n";




 return 0;
}
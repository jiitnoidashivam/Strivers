#include <iostream>
using namespace std;

class node{
public:
int data;
node*next;
};

void insert1(node *& head,int value){
    node*n=new node();
    n->data=value;
    if(head==nullptr){
        n->next=nullptr;
        head=n;
        return;
    }
    n->next=head;
    head=n;
    return;
}

void print(node*head){
    node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* lastnth(node*&head,int n){
    if(head==nullptr){
        return nullptr;
    }
    node*dummy=new node();
    dummy->next=head;
    node*slow=dummy;
    node*fast=dummy;
    for(int i=0;i<n+1;i++){
        fast=fast->next;
    }
    while(fast!=nullptr){
        slow=slow->next;
        fast=fast->next;
    }
    node*temp=slow->next;
    slow->next=slow->next->next;
    delete temp;
    head=dummy->next;
    delete dummy;
    return head;
}

int main() {
    node*head=nullptr;
    insert1(head,5);
    insert1(head,4);
    insert1(head,3);
    insert1(head,2);
    insert1(head,1);
    lastnth(head,3);
    print(head);
    return 0;
}
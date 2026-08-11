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

bool is_palindrome(node*head){
    if(head==nullptr){
    return true;
    }
    node*slow=head;
    node*fast=head;
    while(fast->next!=nullptr && fast->next->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    node*curr=slow->next;
    node*before=nullptr;
    node*ahead=nullptr;
    while(curr!=nullptr){
        ahead=curr->next;
        curr->next=before;
        before=curr;
        curr=ahead;
    }
    node*first=head;
    node*second=before;
    while(second!=nullptr){
        if(first->data!=second->data){
            return false;
        }
        first=first->next;
        second=second->next;
    }
    return true;
}

int main() {
    node*head=nullptr;
    insert1(head,10);
    insert1(head,20);
    insert1(head,30);
    insert1(head,40);
    insert1(head,30);
    insert1(head,20);
    insert1(head,10);
    cout<<is_palindrome(head);
    return 0;
}
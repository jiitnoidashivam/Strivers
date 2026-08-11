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

void segrigate(node*&head){
    if(head==nullptr){
        cout<<"List is empty"<<endl;
        return;
    }
    node*odd=head;
    node*even=head->next;
    node*evenhead=even;
    while(even!=nullptr && even->next!=nullptr){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenhead;
}

int main() {
    node*head=nullptr;
    insert1(head,5);
    insert1(head,4);
    insert1(head,3);
    insert1(head,2);
    insert1(head,1);
    segrigate(head);
    print(head);
    return 0;
}
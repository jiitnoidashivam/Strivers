#include <iostream>
#include<stack>
using namespace std;

class node{
public:
int data;
node*prev;
node*next;
};

void insert1(node*&head,int value){
    node*n=new node();
    n->data=value;
    n->prev=nullptr;
    if(head==nullptr){
        n->next=nullptr;
        head=n;
        return;
    }
    n->next=head;
    head->prev=n;
    head=n;
    return;
}

void reverse(node*&head){
    if(head==nullptr){
        return;
    }
stack<int> s;
node*temp=head;
while(temp!=nullptr){
    s.push(temp->data);
    temp=temp->next;
}
node*temp2=head;
while(temp2!=nullptr){
    temp2->data=s.top();
    s.pop();
    temp2=temp2->next;
}
}
int main() {
        node*head=nullptr;
    insert1(head,30);
    insert1(head,20);
    insert1(head,10);
    reverse(head);
    node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}
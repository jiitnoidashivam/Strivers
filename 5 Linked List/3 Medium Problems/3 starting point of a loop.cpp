#include <iostream>
#include<map>
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

node* starting_loop(node*head){
    if(head==nullptr){
        cout<<"List is empty"<<endl;
        return nullptr;
    }
    node*slow=head;
    node*fast=head;
    while(fast->next!=nullptr && fast!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if (slow==fast){
            slow=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return slow;
        }
    }
    return nullptr;
}
int main() {
    node*head=nullptr;
    insert1(head,60);
    insert1(head,50);
    insert1(head,40);
    insert1(head,30);
    insert1(head,20);
    insert1(head,10);
    node*temp=head->next;
    node*temp2=head;
    while(temp2->next!=nullptr){
        temp2=temp2->next;
    }
    temp2->next=temp;
    node*result=starting_loop(head);
    cout<<result->data<<endl;
    return 0;
}
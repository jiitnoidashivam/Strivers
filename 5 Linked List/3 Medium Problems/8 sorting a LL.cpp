#include <iostream>
using namespace std;

class node{
public:
int data;
node*next;
node(){}
node(int x){
    data=x;
    next=nullptr;
}
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

node* merge(node*left,node*right){
    node dummy(0);
    node*tail=&dummy;
    while(left!=nullptr && right!=nullptr){
        if(left->data<=right->data){
            tail->next=left;
            left=left->next;
        }
        else if(right->data<left->data){
            tail->next=right;
            right=right->next;
        }
        tail=tail->next;
    }
    if(left!=nullptr){              //simply connect the leftover LL with tail
            tail->next=left;
        }
        else if(right!=nullptr){
            tail->next=right;
        }
        return (dummy.next);            //dummy is not a pointer so we cannot write dummy->next
                                        //dummy is of type node,butdummy.next is node*
}

node* mergesort(node * head){
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    node*slow=head;
    node*fast=head->next;                           //rem that fast starts from head->next not head
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    node*right=slow->next;
    slow->next=nullptr;
    node*leftsorted=mergesort(head);
    node*rightsorted=mergesort(right);
    return merge(leftsorted,rightsorted);
}

int main() {
    node*head=nullptr;
    insert1(head,765);
    insert1(head,4);
    insert1(head,67);
    insert1(head,2);
    insert1(head,90);
    node*temp=mergesort(head);
    print(temp);
    return 0;
}
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

bool has_loop(node*head){
    if(head==nullptr){
        cout<<"List is empty stupid"<<endl;
        return false;
    }
    map<node*,int> m;
    node*temp=head;
    while(temp!=nullptr){
        if(m.find(temp)!=m.end()){
            return true;
        }
        m[temp]=1;
        temp=temp->next;
    }
    return false;
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
    cout<<has_loop(head)<<endl;
    return 0;
}
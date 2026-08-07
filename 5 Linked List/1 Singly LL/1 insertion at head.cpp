#include<iostream>
using namespace std;
class node{
public:
int data;
node*next;
node(){}
node(int x):data(x),next(nullptr){}
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
int main(){
    node*head=nullptr;
    insert1(head,30);
    insert1(head,20);
    insert1(head,10);
    node*temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}
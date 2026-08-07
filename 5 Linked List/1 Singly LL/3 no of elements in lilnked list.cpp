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

int no_of_elements(node*head){
    int count=0;
    node*temp=head;
    while(temp!=nullptr){
        count++;
        temp=temp->next;
    }
    return count;
}
int main(){
    node*head=nullptr;
    insert1(head,30);
    insert1(head,20);
    insert1(head,10);
    insert1(head,5);
    cout<<no_of_elements(head)<<endl;
    return 0;
}
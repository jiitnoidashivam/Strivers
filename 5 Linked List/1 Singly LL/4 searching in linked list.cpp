#include <iostream>
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

bool exists(node*head,int key){
    node*temp=head;
    while(temp!=nullptr){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}
int main() {
    node*head=nullptr;
    insert1(head,30);
    insert1(head,20);
    insert1(head,10);
    bool x=exists(head,2);
    if(x){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}
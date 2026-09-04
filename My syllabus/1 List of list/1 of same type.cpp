#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
    node*down;
};

void insertnext(node*&head,int value){
    node*n=new node();
    n->data=value;
    n->next=nullptr;
    n->down=nullptr;
  if(head==nullptr){
    head=n;
    return;
  }
  node*temp=head;
  while(temp->next!=nullptr){
    temp=temp->next;
  }
  temp->next=n;
}

void insertdown(node*&head,int value){
    if(head==nullptr){
        return;
    }
    node*n=new node();
    n->data=value;
    n->next=nullptr;
    n->down=nullptr;
    node*temp=head;
    while(temp->down!=nullptr){
        temp=temp->down;
    }
    temp->down=n;
}

void print(node*head){
    if(head==nullptr){
        cout<<"List is empty"<<endl;
        return;
    }
   node*row=head;
   while(row!=nullptr){
    node*temp=row;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    row=row->down;
   }
}

int main(){
    node*head=nullptr;
    insertnext(head,10);
    insertnext(head,11);
    insertnext(head,12);

    insertdown(head,20);
    insertnext(head->down,21);
    insertnext(head->down,22);
    insertnext(head->down,23);

    insertdown(head->down,30);
    insertnext(head->down->down,31);

    print(head);
    return 0;
}
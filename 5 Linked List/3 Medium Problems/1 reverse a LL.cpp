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
node* reverse(node*&head){
if(head==nullptr){
    cout<<"List is empty!!"<<endl;
    return nullptr;
}
node*temp=head;
node*before=nullptr;
node*ahead=nullptr;
while(temp!=nullptr){
    ahead=temp->next;
    temp->next=before;
    before=temp;
    temp=ahead;
}
head=before;
return head;
}


int main() {
    node*head=nullptr;
    insert1(head,60);
    insert1(head,50);
    insert1(head,40);
    insert1(head,30);
    insert1(head,20);
    insert1(head,10);
    node*head2=reverse(head);

    //Both list will be changed as you modified the list 1 itself

    cout<<"List 1: ";
    print(head);
    cout<<"\nList 2: ";
    print(head2);
    return 0;
}
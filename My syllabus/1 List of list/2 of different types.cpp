#include <iostream>
using namespace std;

struct slot{
int start;
int end;
string sub;
string fac;
slot*next;
};

struct node{
 string x;
 slot*next;
 node*down;   
};

void insertday(node*& head, string name){
    node* n = new node();
    n->x = name;
    n->next = nullptr;
    n->down = nullptr;
    if(head == nullptr){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->down != nullptr){
        temp = temp->down;
    }
    temp->down = n;
}

void insertslot(node*&head,int x=-1,int y=1,string z="",string w=""){
if(head==nullptr){
    cout<<"There is no such day"<<endl;
    return;
}
slot*n=new slot();
n->start=x;
n->end=y;
n->sub=z;
n->fac=w;
n->next=nullptr;
if(head->next==nullptr){
    head->next=n;
    return;
}
slot*temp=head->next;
while(temp->next!=nullptr){
temp=temp->next;
}
temp->next=n;
}

void print(node* head){
    if(head == nullptr){
        cout << "List is empty" << endl;
        return;
    }
    node* temp = head;
    while(temp != nullptr){
        cout << temp->x << endl;
        slot* s = temp->next;
        while(s != nullptr){
            if(s->start==-1){
                cout<<"Empty Slot"<<endl;
                s=s->next;
                continue;
            }
            cout << s->start << "-" << s->end<< "  " << s->sub<< "  " << s->fac << endl;
            s=s->next;
        }
        cout << endl;
        temp = temp->down;
    }
}


int main() {
    node*head=nullptr;
    insertday(head,"Monday");
    insertday(head,"Tuesday");
    
    insertslot(head,9,10,"DS Lecture","Suma Dawn");
    insertslot(head);
    insertslot(head,11,12,"DBMS","Diksha Chawla");

    insertslot(head->down,9,10,"Maths","Nishita Yadav");
    insertslot(head->down,10,11,"DS Lecture","Suma Dawn");
    insertslot(head->down,11,12,"Economics","Amanpreet Kaur");

    print(head);
    return 0;
}
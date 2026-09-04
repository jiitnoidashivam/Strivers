#include <iostream>
using namespace std;

struct slot{
    int start;
    int end;
    string sub;
    string fac;
    string room;
    slot* next;
    slot* down;
};

struct node{
    string x;
    slot* next;
    node* down;
};

void insertday(node*& head, string name) {
    node* n = new node();
    n->x = name;
    n->next = nullptr;
    n->down = nullptr;
    if(head == nullptr) {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->down != nullptr) {
        temp = temp->down;
    }
    temp->down = n;
}

void insertslot(node* head, int start=-1, int end=-1,string sub="", string fac="", string room=""){
    if(head == nullptr) {
        cout << "There is no such day" << endl;
        return;
    }
    slot* n = new slot();
    n->start = start;
    n->end = end;
    n->sub = sub;
    n->fac = fac;
    n->room = room;
    n->next = nullptr;
    n->down = nullptr;
    if(head->next == nullptr) {
        head->next = n;
        return;
    }
    slot* temp = head->next;
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = n;
}

void print(node* head) {
    if(head == nullptr) {
        cout << "List is empty" << endl;
        return;
    }
    node* temp = head;
    while(temp != nullptr) {
        cout << temp->x << endl;
        slot* s = temp->next;
        while(s != nullptr) {
            if(s->start == -1) {
                cout << "Empty Slot" << endl;
                s=s->next;
                continue;
            }
                cout << s->start << "-" << s->end<< "  " << s->sub<< "  " << s->fac<< "  Room: " << s->room << endl;
            s = s->next;
        }
        cout << endl;
        temp = temp->down;
    }
}

void connectdown(node*head){
    if(head==nullptr){
        return;
    }
    node*d=head;
    while(d!=nullptr && d->down!=nullptr){
        slot*s1=d->next;
        slot*s2=d->down->next;
        while(s1!=nullptr && s2!=nullptr){
            s1->down=s2;
         s1=s1->next;
        s2=s2->next;
        }
        d=d->down;
    }
}

int main() {
    node* head = nullptr;

    insertday(head, "Monday");
    insertday(head, "Tuesday");
    insertday(head, "Wednesday");

    insertslot(head, 9, 10, "Maths", "Sharma", "G1");
    insertslot(head);
    insertslot(head, 11, 12, "Physics", "Kumar", "CS2");

    insertslot(head->down, 9, 10, "DBMS", "Verma", "FF2");
    insertslot(head->down, 10, 11, "OS", "Singh", "G5");

    insertslot(head->down->down, 9, 10, "DSA", "Gupta", "G3");
    insertslot(head->down->down, 10, 11, "Maths", "Sharma", "FF3");

    connectdown(head);

    print(head);

    return 0;
}
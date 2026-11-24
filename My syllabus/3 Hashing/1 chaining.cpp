#include <iostream>
using namespace std;

struct node{
int data;
node*next;
};

const int SIZE=10;

node*arr[SIZE];

void initilize(){
    for(int i=0;i<SIZE;i++){
        arr[i]=nullptr;
    }
}

int hashfunction(int key){
    return (key%10);
}

void insert1(int key){
    int index=hashfunction(key);
    node*n=new node;
    n->data=key;
    n->next=arr[index];
    arr[index]=n;
}

void insert2(int key){
    int index=hashfunction(key);
    node*n=new node();
    n->data=key;
    n->next=nullptr;
    node*temp=arr[index];
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=n;
}

bool search(int key){
    int index=hashfunction(key);
    if(arr[index]->data==key){
        return true;
    }
    node*temp=arr[index];
    while(temp!=nullptr){
        if(temp->data==key){
            return true;
        }
    }
    return false;
}



int main() {
    
    return 0;
}
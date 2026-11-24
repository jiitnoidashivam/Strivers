#include<iostream>
using namespace std;

class node{
public:
int data;
node*left;
node*right;
node(){}
node(int value){
    data=value;
    left=nullptr;
    right=nullptr;
}
};

void insert(node*&root,int value){
    if(root==nullptr){
        node*n=new node(value);
        root=n;
        return;
    }
    if(value<root->data){
        insert(root->left,value);
    }
    else if(value>=root->data){
        insert(root->right,value);
    }
}

void inorder(node*root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

node* searchrequested(node*root,int target){
if(root==nullptr){
return nullptr;
}
if(target<root->data){
return searchrequested(root->left,target);
}
else if(target>root->data){
    return searchrequested(root->right,target);
}
else{
    return root;
}
}

node*deletenode(node*root,int key){
if(root==nullptr){
    return nullptr;
}
if(key<root->data){
    root->left=deletenode(root->left,key);
}
else if(key>root->data){
    root->right=deletenode(root->right,key);
}
else{
    if(root->left==nullptr){
        node*temp=root->right;
        delete root;
        return temp;
    }
    else if(root->right==nullptr){
        node*temp=root->left;
        delete root;
        return temp;
    }
    else{
        node*temp=root->left;
        while(temp->right!=nullptr){
            temp=temp->right;
        }
        root->data=temp->data;
        root->left=deletenode(root->left,temp->data);
    }
}
return root;
}

int main(){
    node*root=new node(50);
    insert(root,30);
    insert(root,70);
    insert(root,20);
    insert(root,40);
    insert(root,60);
    insert(root,80);
    inorder(root);
    cout<<endl;
    root=deletenode(root,50);
    inorder(root);
    return 0;
}
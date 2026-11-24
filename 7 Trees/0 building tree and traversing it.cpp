#include <iostream>
using namespace std;

class node{
public:
int data;
node*left;
node*right;
};

node*createnode(int value){
    node*n=new node;
    n->data=value;
    n->left=nullptr;
    n->right=nullptr;
    return n;
}

int search(int arr[],int start,int end,int value){
    for(int i=start;i<=end;i++){
        if(arr[i]==value){
            return i;
        }
    }
    return -1;
}

node*buildtree(int preorder[],int inorder[],int instart,int inend,int& index){
    if(instart>inend){
        return nullptr;
    }
    int rootvalue=preorder[index];
    index++;
    node*root=createnode(rootvalue);
    int pos=search(inorder,instart,inend,rootvalue);
    root->left=buildtree(preorder,inorder,instart,pos-1,index);
    root->right=buildtree(preorder,inorder,pos+1,inend,index);
    return root;
}

void inordertraversal(node*root){
    if(root==nullptr){
        return;
    }
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}

int main() {
    int preorder[]={8,5,9,7,1,12,2,4,11,3};
    int inorder[]={9,5,1,7,2,12,8,4,3,11};
    int index=0;
    node*root=buildtree(preorder,inorder,0,9,index);
    inordertraversal(root);
    return 0;
}
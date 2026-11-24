#include <iostream>
using namespace std;

const int n=10;

int arr[n];

void initilize(){
    for(int i=0;i<n;i++){
        arr[i]=-1;
    }
}

int hashfunction(int key){
    return (key%10);
}

void insert(int key){
int in=hashfunction(key);
for(int i=0;i<n;i++){
    int p=(in+(i*i))%10;
    if(arr[p]==-1 || arr[p]==-2){
        arr[p]=key;
        return;
    }
}
}

void display(){
    for(int i=0;i<n;i++){
        if(arr[i]==-1){
            cout<<"EMPTY ";
        }
        else if(arr[i]==-2){
            cout<<"DELETED ";
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
}

void remove(int key){
   int in=hashfunction(key);
for(int i=0;i<n;i++){
    int p=(in+(i*i))%10;
    if(arr[p]==-1){
        return;
    }
    if(arr[p]==key){
        arr[p]=-2;
        return;
    }
} 
}

int main() {
    initilize();
    insert(12);
    insert(22);
    insert(32);
    insert(42);
    display();
    remove(22);
    cout<<endl<<endl;
    display();
    return 0;
}
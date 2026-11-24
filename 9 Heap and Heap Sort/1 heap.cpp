#include <iostream>
using namespace std;

void heapify(int arr[],int i,int n){
int largest=i;
int left=(2*i)+1;
int right=(2*i)+2;
if(left<n && arr[left]>arr[largest]){
    largest=left;
}
if(right<n && arr[right]>arr[largest]){
    largest=right;
}
if(largest!=i){
swap(arr[largest],arr[i]);
heapify(arr,largest,n);
}}

void buildheap(int arr[],int n){
    for(int i=(n-1)/2;i>=0;i--){
        heapify(arr,i,n);
    }
}

void heapsort(int arr[],int n){
    buildheap(arr,n);
    for(int i=n-1;i>=1;i--){
        swap(arr[0],arr[i]);
        heapify(arr,0,i);
    }
}

int main() {
    int arr[]={100,34,12,78,0,9,1200,-1};
    int n=sizeof(arr)/sizeof(int);
    heapsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
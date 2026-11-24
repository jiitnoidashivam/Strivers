#include <iostream>
using namespace std;

int interpolation(int arr[],int n,int x){
    int low=0;
    int high=n-1;
    if(low==high){
        if(arr[low]==x){
            return low;
        }
        return -1;
    }
    int pos=low+((x-arr[low])*(high-low))/(arr[high]-arr[low]);
    if(arr[pos]==x){
        return pos;
    }
    if(arr[pos]<x){
        low=pos+1;
    }
    else if(arr[pos]>x){
        high=pos-1;
    }
    return -1;
}

int main() {
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the element you want to find: ";
    cin>>x;
    int result=interpolation(arr,n,x);
    if(result==-1){
        cout<<"Element not found"<<endl;
    }
    else if(result>=0){
        cout<<"Found element "<<x<<" at index "<<result<<endl;
    }
    return 0;
}
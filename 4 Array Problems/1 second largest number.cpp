#include <iostream>
using namespace std;

int main() {
    int arr[]={8,8,7,6,5};
    int n=sizeof(arr)/sizeof(int);
    int x=INT_MIN;
    int y=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>x){
            y=x;
            x=arr[i];
        }
        else if(arr[i]>y && arr[i]!=x){
            y=arr[i];
        }
    }
    if(y==INT_MIN){
        cout<<"No second largest elemnt exists"<<endl;
    }
    else{
    cout<<"Second largets number = "<<y<<endl;
    }
    return 0;
}
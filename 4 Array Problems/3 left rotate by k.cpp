#include <iostream>
using namespace std;

int main() {
    int arr[6]={1,2,3,4,5,6};
    int n=6;
    int k;
    cout<<"Enter the degree by which you want to left rotate: ";
    cin>>k;
    int preserve[k];
    for(int i=0;i<k;i++){
        preserve[i]=arr[i];
    }
    for(int i=0;i<n-k;i++){
        arr[i]=arr[i+k];
    }
    int j=0;
       for(int i=n-k;i<n;i++){
        arr[n-k+j]=preserve[j];
        j++;
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
#include <iostream>
using namespace std;

int missing(int arr[],int n){
    int sum1=0;
    int sum2=(n*(n+1))/2;
    for(int i=0;i<n;i++){
        sum1+=arr[i];
    }
    if(sum1!=sum2){
    return (sum2-sum1);
    }
    else{
    return n+1;
    }
}

int main() {
    int arr[]={0,2,3,4,5};
    int x=missing(arr,5);
    cout<<x<<endl;
    return 0;
}
#include <iostream>
using namespace std;
int partition(int arr[],int low,int high){
    int i=low;
    int j=high;
    while(j>i){
        while(arr[i]<=arr[low] && i<=high){
            i++;
        }
        while(arr[j]>=arr[low] && j>low){
            j--;
        }
        if(i<j){
        swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}
int quick_select(int arr[],int low,int high,int k){
    while(low<=high){
    int p=partition(arr,low,high);
    if(p==k){
        return arr[p];
    }
    else if(k>p){
        low=p+1;
    }
    else{
        high=p-1;
    }
}
    return -1;
}
double median(int arr[],int n){
if(n%2==1){
    return quick_select(arr,0,n-1,n/2);
}
else if(n%2==0){
    int left = quick_select(arr,0,n-1,(n/2)-1);
    int right = quick_select(arr,0,n-1,n/2);
    return (left+right)/2.0;
}
return 0;
}
int main() {
    int arr[]={7,2,9,4,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    double x=median(arr,n);
    cout<<x<<endl;
    return 0;
}
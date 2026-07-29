#include <iostream>
#include<algorithm>
using namespace std;

int partition(int arr[],int low,int high){
int pivot=arr[low];
int i=low;
int j=high;
while(i<j){
    while(arr[i]<=pivot && i<high){
        i++;
    }
    while(arr[j]>pivot && j>=low){
        j--;
    }
    if(i<j){
        swap(arr[i],arr[j]);
    }
}
swap(arr[low],arr[j]);
return j;
}

void quick_sort(int arr[],int low,int high){
    if(low<high){
    int p=partition(arr,low,high);
        quick_sort(arr,low,p-1);
        quick_sort(arr,p+1,high);
    }
}

int main() {
    int arr[8]={4,6,2,5,7,9,1,3};
    quick_sort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
#include <iostream>
#include<utility>
using namespace std;

void selection_sort(int arr[],int n){
    int min;
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i;j<n;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
            swap(arr[min],arr[i]);
        }
    }
}

int main() {
    int arr[6]={13,46,24,52,20,9};
    selection_sort(arr,6);
    for(auto x:arr){
        cout<<x<<endl;
    }
    return 0;
}
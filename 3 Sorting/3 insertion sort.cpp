#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int arr[7]={14,9,15,12,6,8,13};
    int n=7;
    int j;
    for(int i=0;i<n-1;i++){
        j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
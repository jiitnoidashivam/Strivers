#include <iostream>
using namespace std;

void insertion_sort(float arr[],int n){
    int j;
        for(int i=0;i<n-1;i++){
        j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

void bucket_sort(float arr[],int n){
float bucket[10][n];
int count[10]={0};
for(int i=0;i<n;i++){
    int index=arr[i]*10;
    bucket[index][count[index]]=arr[i];
    count[index]++;
}
for(int i=0;i<10;i++){
    insertion_sort(bucket[i],count[i]);
}
int k=0;
for(int i=0;i<10;i++){
    for(int j=0;j<count[i];j++){
        arr[k]=bucket[i][j];
        k++;
    }
}
}

int main() {
    float arr[5]={0.12,0.34,0.56,0.78,0.91};
    bucket_sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
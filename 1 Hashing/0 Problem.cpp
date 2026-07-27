#include <iostream>
using namespace std;

int freq(int arr[],int size,int n){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            count++;
        }
    }
    return count;
}

int main() {
    int arr[]={1,2,1,3,4,5,1,2,3,1};
    int x=freq(arr,10,1);
    cout<<"1 apprear "<<x<<" times in the array"<<endl;
    return 0;
}
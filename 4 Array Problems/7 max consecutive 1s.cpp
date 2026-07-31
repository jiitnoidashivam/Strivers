#include <iostream>
using namespace std;

int consecutive_1s(int arr[],int n){
int flag=0;
int count=0;
for(int i=0;i<n;i++){
if(arr[i]==1){
    count++;
    if(flag<count){
        flag=count;
    }
}
else{
    count=0;
}
}
return flag;
}

int main() {
    int arr[]={1,1,0,0,1,1,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Max number of consecutive 1s in the array = "<<consecutive_1s(arr,n)<<endl;
    return 0;
}
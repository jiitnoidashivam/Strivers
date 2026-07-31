#include <iostream>
using namespace std;

bool is_sorted(int arr[],int n){
    for(int i=0;i<n-1;i++){
        if(arr[i]>=arr[i+1]){
            return false;
        }
       return true;
}
}

int main() {
    int arr[]={1,2,2,3,4,5,6,1};
    bool x=is_sorted(arr,8);
    cout<<x<<endl;
    return 0;
}
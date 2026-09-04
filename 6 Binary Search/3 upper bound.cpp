#include <iostream>
using namespace std;

int lower_bound(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    int ans=n-1;
    while(low<=high){
        int mid=(low + high)/2;
        if(arr[mid]>target){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int main() {
    int arr[]={3,5,8,15,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=lower_bound(arr,n,9);
    cout<<x<<endl;
    return 0;
}
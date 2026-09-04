#include <iostream>
using namespace std;

int insert_position(int arr[],int n,int target){
    int low=0;
    int high=n-1;
    int ans =n;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(target<arr[mid]){
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
    int arr[]={1,3,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=insert_position(arr,n,2);
    cout<<x<<endl;
    return 0;
}
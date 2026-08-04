#include <iostream>
#include<algorithm>
using namespace std;

int longestlength(int arr[],int n,int k){
    int left=0;
    int right=0;
    int sum=arr[0];
    int len=0;
    while(right<n){
        while(sum>k && left<right){
            sum-=arr[left];
            left++;
        }
        if(sum==k){
            len=max(len,right-left+1);
        }
        right++;
        if(right<n){
        sum+=arr[right];
        }
    }
    return len;
}

int main() {
    int arr[]={1,2,3,1,1,1,4,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=longestlength(arr,n,3);
    cout<<x<<endl;
    return 0;
}
#include <iostream>
using namespace std;

//the only problem with sum method is that if number is very large, n(n+1)/2 can overflow the max value of int
//this is the most common method for interviews

int missing(int arr[],int n){
    int ans=0;
for(int i=0;i<=n;i++){          //mind the equal sign here , because 1 elemnt will obviously be missing , so this is here(even if it it the next elemnt)
ans=ans^i;
}
for(int i=0;i<n;i++){
    ans=ans^arr[i];
}
return ans;
}

int main() {
    int arr[]={0,1,2,3,4,5};
    int x=missing(arr,6);
    cout<<x<<endl;
    return 0;
}
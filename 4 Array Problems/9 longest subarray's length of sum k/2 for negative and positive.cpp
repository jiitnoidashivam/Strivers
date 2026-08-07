#include <iostream>
#include<map>
#include<algorithm>
using namespace std;

int longestlength(int arr[],int n,int k){
map<int,int> m;
int sum=0;
int len=0;
for(int i=0;i<n;i++){
    sum+=arr[i];
   if(sum==k){
    len=max(len,i+1);
   }
   int x=sum-k;
   if(m.find(x)!=m.end()){
    int len2=i-m[x];
    len=max(len,len2);
   }
   if(m.find(sum)==m.end())
    m[sum]=i;
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
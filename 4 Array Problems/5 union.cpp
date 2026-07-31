#include <iostream>
#include<set>
#include<vector>
using namespace std;

vector<int> unionarray(int arr1[],int n1,int arr2[],int n2){
set<int> s;
for(int i=0;i<n1;i++){
    s.insert(arr1[i]);
}
for(int i=0;i<n2;i++){
    s.insert(arr2[i]);
}
vector<int> v;
for(int x:s){
v.push_back(x);
}
return v;
}
int main() {
    int arr1[]={1,2,2,3,4,5,6};
    int arr2[]={1,321,4,6,56,22,0};
    vector<int> v=unionarray(arr1,7,arr2,7);
    for(int it:v){
        cout<<it<<endl;
    }
    return 0;
}
#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
    int arr[11]={1,2,3,4,1,2,1,100,21,45,10000};
    unordered_map<int,int> m;
    for(int i=0;i<11;i++){
        m[arr[i]]++;
    }
    for(pair<int,int> x:m){         //you can also use auto x instead of pair , but anyway it is a pair only
        cout<<x.first<<" has a frequency of "<<x.second<<endl;
    }
    return 0;
}
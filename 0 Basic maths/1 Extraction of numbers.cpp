#include <iostream>
#include<map>
using namespace std;

int main() {
    int n;
    cout<<"Enter the number :";
    cin>>n;
    map<int,int> m;
    for(int i=0;n>0;i++){
        if(n%10==0){
            m[i]=0;
        }
        else{
            m[i]=n%10;
        }
        n/=10;
    }
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->second<<endl;
    }
    return 0;
}
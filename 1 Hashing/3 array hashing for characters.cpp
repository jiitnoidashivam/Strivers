#include <iostream>
using namespace std;

int main() {
   string s="abacba";
   int hash[256]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]]++;
    }
    for(int i=0;i<256;i++){
        if(hash[i]>0)
        cout<<char(i)<<" occured "<<hash[i]<<" times"<<endl;
    }
    return 0;
}
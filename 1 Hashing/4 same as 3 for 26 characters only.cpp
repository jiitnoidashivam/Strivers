#include <iostream>
using namespace std;

int main() {
   string s="abacba";
   int hash[26]={0};
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(hash[i]>0)
        cout<<char(i+'a')<<" occured "<<hash[i]<<" times"<<endl;
    }
    return 0;
}
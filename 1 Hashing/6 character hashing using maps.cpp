#include <iostream>
#include<map>
#include<string>
using namespace std;

int main() {
    string s="absacrdesa";
    map<char,int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    for(pair<char,int> x:m){
        if(m[x.first]>0)
        cout<<x.first<<" has a frequency of "<<x.second<<endl;
    }
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter number of vertices(n): ";
    cin>>n;
    cout<<"Enter number of edges(m): ";
    cin>>m;
    vector<vector<int>> adj(n+1);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<"   ";
        }
        cout<<endl;
    }
    return 0;
}
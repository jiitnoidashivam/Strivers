#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter number of vertices(n): ";
    cin>>n;
    cout<<"Enter number of edges(m): ";
    cin>>m;
    int adj[100][100]={0};
    for(int i=0;i<m;i++){
        int a,b;
        cout<<"Enter relation "<<i+1<<" : ";
        cin>>a>>b;
        adj[a][b]=1;
        adj[b][a]=1;
    }
    cout<<endl<<"Adjacency Matrix is: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<adj[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
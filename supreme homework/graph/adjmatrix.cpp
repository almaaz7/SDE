#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of nodes"<<endl;
    cin>>n;
    int e;
    cout<<"enter the number of edges"<<endl;
    cin>>e;

    vector<vector<int>> adj(n,vector<int>(n,0));

    for(int i = 0 ;i<e;i++){
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
    }

    for(int i = 0 ;i<n;i++){
        for(int j = 0 ;j<n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>> adjlist;

    void addEdge(int u,int v){
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    void show(){
        for(auto node:adjlist){
            cout<<node.first<<"-> ";
            for(auto neighbour:node.second){
                cout<<neighbour<<", ";
            }
            cout<<endl;
        }
    }
    void dfs(int src,vector<int>& visited){
        visited[src] = 1;

        for(auto neighbour:adjlist[src]){
            if(!visited[neighbour]){
                dfs(neighbour,visited);
            }
        }
    }

    void numberOfCities(int src,int n){
        vector<int> visited(n);
        int count = 0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                dfs(src,visited);
            }
        }
        cout<<"total no. of components"<<count;

    }
};

int main(){
    Graph g;
    g.addEdge(0,1);
    g.addEdge(0,2);
    g.addEdge(2,1);
    g.addEdge(3,4);

    g.show();
    int n = 5;
    g.numberOfCities(0,n);
}
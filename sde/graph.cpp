#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

class Graph{
    public:
    unordered_map<int, list<int>> adjlist;

    void addEdge(int u,int v){
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    void display(){
        for(auto node:adjlist){
            cout<<node.first<<"-> ";
            for(auto neighbour:node.second){
                cout<<neighbour<<" ";
            }
            cout<<endl;
        }
    }

    void bfs(int src){
        unordered_map<int,bool> visited;
        queue<int> q;
        q.push(src);
        visited[src]= true;

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            cout<<frontNode<<" ";

            for(auto neighbour:adjlist[frontNode]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
    }

    void dfs(int src,unordered_map<int,bool>& visited){
        cout<<src<<" ";
        visited[src] = true;

        for(auto neighbour:adjlist[src]){
            if(!visited[neighbour]){
                dfs(neighbour,visited);
            }
        }
    }
};

int main(){
    Graph g;
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(0,4);
    g.addEdge(4,5);

    g.display();
    g.bfs(0);

    unordered_map<int,bool> visited;
    g.dfs(0,visited);

}
#include<iostream>
#include<list>
#include<unordered_map>
#include<queue>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>> adjlist;

    void addEdge(int u,int v,int direction){
        adjlist[u].push_back(v);
        if(direction==0){
            adjlist[v].push_back(u);
        }
    }

    void printList(){
        for(auto node:adjlist){
            cout<<node.first<<"->";
            for(auto neighbour:node.second){
                cout<<neighbour<<" ";
            }
            cout<<endl;
        }
    }

    void bfs(int src){
        queue<int> q;
        unordered_map<int,bool> visited;

        q.push(src);
        visited[src] = true;
        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            cout<<frontNode<<",";

            for(auto neighbour:adjlist[frontNode]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }

    }

    void dfs(int src,unordered_map<int,bool>& visited){
        cout<<src<<",";
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
    g.addEdge(0,1,0);
    g.addEdge(0,2,0);
    g.addEdge(1,2,0);

    g.printList();
    g.bfs(2);
    unordered_map<int,bool> visited;
    g.dfs(2,visited);
}
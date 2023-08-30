#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

class Graph{
public:    
    unordered_map<int, list<int>> adjlist;

    void addEdge(int u,int v,bool direction){
        adjlist[u].push_back(v);
        if(direction==0){
            adjlist[v].push_back(u);
        }
    }

    void printlist(){
        for(auto node: adjlist){
            cout<<node.first<<"-> ";
            for(auto neighbour: node.second){
                cout<<neighbour<<", ";
            }
            cout<<endl;
        }
    }

    void bfs(int src, unordered_map<int, bool>& visited){
        queue<int> q;
        q.push(src);
        visited[src] = true;

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            cout<<frontNode<<", ";

            for(auto neighbour: adjlist[frontNode]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour]= true;
                }
                
            }
        }
    }

    void dfs(int src,unordered_map<int, bool>& visited){
        cout<<src<<", ";
        visited[src] = true;

        for(auto neighbour: adjlist[src]){
            if(!visited[neighbour]){
                dfs(neighbour,visited);
            }
        }
    }
};

int main(){
    Graph g;
    unordered_map<int, bool> visited;
    unordered_map<int, bool> visited2;
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);
    g.addEdge(1,4,0);
    g.addEdge(4,5,0);

    g.printlist();

    cout<<"printing bfs"<<endl;
    g.bfs(1,visited);
    cout<<"\nprinting dfs"<<endl;
    g.dfs(1,visited2);

}
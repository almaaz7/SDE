#include<iostream>
#include<unordered_map>
#include<queue>
#include<list>
#include<algorithm>
#include<stack>
using namespace std;

class Graph{
    public: 
    unordered_map<int,list<pair<int,int>>> adjlist;

    void addEdge(int u,int v,int direction){
        adjlist[u].push_back({v,direction});
        if(direction == 0){
            adjlist[v].push_back({u,direction});
        }
    }

    void display(){
        for(auto node:adjlist){
            cout<<node.first<<"-> ";
            for(auto neighbour:node.second){
                cout<<"("<<neighbour.first<<","<<neighbour.second<<"), ";
            }
            cout<<endl;
        }
    }

    void shortestPathBfs(int src,int dst){
        unordered_map<int,bool> visited;
        unordered_map<int,int> parent;

        queue<int> q;
        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            for(auto neighbour:adjlist[frontNode]){
                if(!visited[neighbour.first]){
                    q.push(neighbour.first);
                    visited[neighbour.first] = true;
                    parent[neighbour.first] = frontNode;
                }
            }
        }

        stack<int> ans;
        int node = dst;
        while(node != -1){
            ans.push(node);
            node = parent[node];
        }

        
        while(!ans.empty()){
            cout<<ans.top()<<"-> ";
            ans.pop();
        }
    }

    void dfsshortestpath(int src,int dst){
    }
};

int main()
{
    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(0,2,1);
    g.addEdge(0,3,1);

    g.addEdge(1,4,1);
    g.addEdge(2,5,1);
    g.addEdge(3,6,1);

    g.addEdge(4,5,1);
    g.addEdge(6,5,1);

    g.display();
    int src = 0;
    int dst = 5;
    g.shortestPathBfs(src,dst);
}
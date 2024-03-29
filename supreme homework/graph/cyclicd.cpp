#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<int>> adjlist;

    void addEdge(int u, int v, int direction)
    {
        adjlist[u].push_back(v);
        if (direction == 0)
        {
            adjlist[v].push_back(u);
        }
    }

    void show()
    {
        for (auto node : adjlist)
        {
            cout << node.first << "-> ";
            for (auto neighbour : node.second)
            {
                cout << neighbour << ", ";
            }
            cout << endl;
        }
    }

    void bfs(int src, unordered_map<int, bool> &visited)
    {
        queue<int> q;
        q.push(src);
        visited[src] = true;
        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();
            cout << frontNode << " ";

            for (auto neighbour : adjlist[frontNode])
            {
                if (!visited[neighbour])
                {
                    q.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
    }
    bool cyclicDetectionbfs(int src)
    {
        queue<int> q;
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;

        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        while (!q.empty())
        {
            int frontNode = q.front();
            q.pop();

            for (auto neighbour :adjlist[frontNode]){
                if(!visited[neighbour]){
                    q.push(neighbour);
                    visited[neighbour] = true;
                    parent[neighbour] = frontNode;
                }else{
                    if(parent[frontNode] != neighbour){
                        return true;
                    }
                }
            }
        }
        return false;
    }

    void dfs(int src,unordered_map<int, bool>& visited){
        cout<<src<<" ";
        visited[src]=true;

        for(auto neighbour: adjlist[src]){
            if(!visited[neighbour]){
                dfs(neighbour,visited);
            }
        }
    }

    bool cyclicdetectiondfs(int src,unordered_map<int,bool>& visited,int parent){
        visited[src]=true;
        for(auto neighbour:adjlist[src]){
            if(!visited[neighbour]){
                bool check = cyclicdetectiondfs(neighbour,visited,src);
                if(check==true){return true;}
            }else{
                if(neighbour!= parent) return true;
            }
        }
        return false;
    }

    bool isCycle(int src,unordered_map<int,bool>& visited,int parent){
        visited[src] = true;
        for(auto neighbour:adjlist[src]){
            if(!visited[neighbour]){
                if(isCycle(neighbour,visited,src)) return true;
            }else if(neighbour != parent) return true;
        }
        return false;
    }

    bool cycleinDirectedgraph(int src,unordered_map<int,bool>& visited,unordered_map<int,bool>& dfsvisited){
        visited[src] = true;
        dfsvisited[src] = true;

        for(auto neighbour:adjlist[src]){
            if(!visited[neighbour]){
                bool ans = cycleinDirectedgraph(neighbour,visited,dfsvisited);
                if(ans) return true;
            }else{
                if(dfsvisited[neighbour]){
                    return true;
                }
            }
        }
        dfsvisited[src] = false;
        return false;
    }
};

int main()
{
    Graph g;
    g.addEdge(0,1,1);
    g.addEdge(1,2,1);
    g.addEdge(2,3,1);
    // g.addEdge(3,3,1);
    

    g.show();
    // unordered_map<int, bool> visited;
    // g.bfs(0, visited);
    // if(g.cyclicDetectionbfs(0)){
    //     cout<<"\nCycle present"<<endl;
    // }else{
    //     cout<<"Cycle Absent"<<endl;
    // }
    // cout<<endl<<"DFS"<<endl;
    // unordered_map<int,int> parent;
    // parent[0] = -1;
    unordered_map<int,bool> visited2;
    unordered_map<int,bool> dfsvisited;
    // g.dfs(0,visited2);
    if(g.cycleinDirectedgraph(0,visited2,dfsvisited)){
        cout<<"\nCycle present"<<endl;
    }else{
        cout<<"Cycle Absent"<<endl;
    }

}

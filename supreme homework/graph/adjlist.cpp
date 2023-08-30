#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph{
public: 
    unordered_map<int, list<int>> adjlist;
    unordered_map<int, list<pair<int,int>>> adjlistw;

    void addEdge(int u,int v,bool direction){
        adjlist[u].push_back(v);
        if(direction == 0){
            adjlist[v].push_back(u);
        }
    }

    void addEdge(int u,int v,int w, bool direction){
        adjlistw[u].push_back({v,w});
        if(direction == 0 ){
            adjlistw[v].push_back({u,w});
        }
    }

    void printListw(){
        for(auto node: adjlistw){
            cout<<node.first<<"-> ";
            for(auto neighbour: node.second){
                cout<<"("<<neighbour.first<<","<<neighbour.second<<")";
            }
            cout<<endl;
        }
    }

    void printList(){
        for(auto node: adjlist){
            cout<<node.first<<"-> ";
            for(auto neighbour: node.second){
                cout<<neighbour<<", ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Graph g;

    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(1,3,0);
    g.addEdge(3,7,0);
    g.addEdge(3,5,0);
    g.addEdge(7,6,0);
    g.addEdge(7,4,0);

    g.addEdge(0,1,4,0);
    g.addEdge(0,2,9,0);
    g.addEdge(1,2,5,0);

    g.printList();
    cout<<endl<<"printing wieghted graph"<<endl;
    g.printListw();
}
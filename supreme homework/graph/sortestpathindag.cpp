#include<iostream>
#include<unordered_map>
#include<list>
#include<stack>
#include<vector>
using namespace std;

class Graph{
public: 
    unordered_map<int, list<pair<int,int>>> adjlist;

    void addEdge(int u,int v,int w){
        adjlist[u].push_back(make_pair(v,w));
    }

    void display(){
        for(auto node:adjlist){
            cout<<node.first<<"-> ";
            for(auto neighbour:node.second){
                cout<<"("<<neighbour.first<<","<<neighbour.second<<")";
            }
            cout<<endl;
        }
    }

    void topology(int src,unordered_map<int,bool>& visited, stack<int>& st){
        visited[src] = true;

        for(auto neighbour: adjlist[src]){
            if(!visited[neighbour.first]){
                topology(neighbour.first,visited,st);
            }
        }
        st.push(src);
    }

    void shortestpathdag(int dest, stack<int> st,int n){
        vector<int> distance(n,INT_MAX);

        int src = st.top();
        distance[src] = 0;

        while(!st.empty()){
            int topelement = st.top();
            st.pop();
            if(distance[topelement] != INT_MAX){
                for(auto neighbour:adjlist[topelement]){
                    if(distance[topelement]+neighbour.second < distance[neighbour.first]){
                        distance[neighbour.first] = distance[topelement]+neighbour.second;
                    }
                }
            }
        }
        cout<<"printing distance array"<<endl;
        for(auto i:distance){
            cout<<i<<" ";
        }
    }
};

int main(){
    Graph g;
    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,3,3);
    g.addEdge(2,1,2);
    g.addEdge(2,3,5);
    g.addEdge(2,4,6);
    g.addEdge(4,3,1);

    g.display();
    stack<int> st;
    unordered_map<int, bool> visited;
    g.topology(0,visited,st);
    int n = 5;
    
    unordered_map<int, bool> visite2;
    g.shortestpathdag(3,st,n);
    
}
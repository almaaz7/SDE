#include<iostream>
#include<unordered_map>
#include<list>
#include<stack>
#include<vector>
using namespace std;

class Graph{
public:    
    unordered_map<int, list<int>> adjlist;

    void addlist(int u,int v){
        adjlist[u].push_back(v);
    }

    void show(){
        for(auto node:adjlist){
            cout<<node.first<<"-> ";
            for(auto neighbour:node.second){
                cout<<neighbour<<" ";
            }
            cout<<endl;
        }
    }
    void topologysortDFS(int src,unordered_map<int,bool>& visited,stack<int>& st){
        visited[src] = true;

        for(auto neighbour:adjlist[src]){
            if(!visited[neighbour]){
                topologysortDFS(neighbour,visited,st);
            }
        }
        st.push(src);
    }
};



int main(){
    Graph g;
    g.addlist(0,1);
    g.addlist(0,3);
    g.addlist(1,2);
    g.addlist(3,2);
    int n = 4;
    g.show();
    
    unordered_map<int,bool> visited;
    stack<int> st;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            g.topologysortDFS(i,visited,st);
        }
    }
    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    for(auto i:ans){
        cout<<i<<" ";
    }
}
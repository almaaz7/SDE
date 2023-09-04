#include<iostream>
#include<unordered_map>
#include<list>
#include<stack>
#include<vector>
#include<queue>
using namespace std;

class Graph{
public:    
    unordered_map<int, list<int>> adjlist;

    void addedge(int u,int v){
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

    void topologyBFS(vector<int>& ans,int v){
        //step 1: indegree
        vector<int> indegree(v+1);
        for(auto i:adjlist){
            for(auto j:i.second){
                indegree[j]++;
            }
        }
        //step 2: insert in q with 0 indegree
        queue<int> q;
        for(int i=0;i<v;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            ans.push_back(frontNode);

            for(auto neighbour:adjlist[frontNode]){
                indegree[neighbour]--;
                if(indegree[neighbour]==0){
                    q.push(neighbour);
                }
            }
        }


    }
};



int main(){
    Graph g;
    g.addedge(1,2);
    g.addedge(1,3);
    g.addedge(2,5);
    g.addedge(3,5);
    g.addedge(5,4);
    int n = 5;
    g.show();
    vector<int> ans;
    g.topologyBFS(ans,n);
    for(auto i:ans){
        cout<<i<<" ";
    }
    
    // unordered_map<int,bool> visited;
    // stack<int> st;
    // for(int i=0;i<n;i++){
    //     if(!visited[i]){
    //         g.topologysortDFS(i,visited,st);
    //     }
    // }
    // vector<int> ans;
    // while(!st.empty()){
    //     ans.push_back(st.top());
    //     st.pop();
    // }

    
}
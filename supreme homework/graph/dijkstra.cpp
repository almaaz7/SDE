#include<iostream>
#include<list>
#include<set>
#include<vector>
#include<unordered_map>
using namespace std;

class Graph{
public: 
    unordered_map<int, list<pair<int,int>>> adjlist;

    void addEdge(int u,int v,int w){
        adjlist[u].push_back({v,w});
        adjlist[v].push_back({u,w});
    }

    void show(){
        for(auto node:adjlist){
            cout<<node.first<<"-> ";
            for(auto neighbour: node.second){
                cout<<"["<<neighbour.first<<", "<<neighbour.second<<"],";
            }
            cout<<endl;
        }
    }

    void dijkstra(int src,vector<int>& distance){
        
        set<pair<int,int>> st;

        distance[src] = 0;
        st.insert(make_pair(0,src));

        while(!st.empty()){
            auto top = *(st.begin());
            int topNode = top.second;
            int nodeDistance = top.first;
            st.erase(st.begin());
            for(auto neighbour : adjlist[topNode]){
                if(nodeDistance + neighbour.second < distance[neighbour.first]){
                    auto record = st.find(make_pair(distance[neighbour.first],neighbour.first));
                    if(record != st.end()){
                        st.erase(record);
                    }
                    distance[neighbour.first] = nodeDistance + neighbour.second;
                    st.insert(make_pair(distance[neighbour.first], neighbour.first));
                }
            }
        }
    }
};

int main()
{
    Graph g;
    g.addEdge(0,1,7);
    g.addEdge(0,2,1);
    g.addEdge(0,3,2);

    g.addEdge(1,2,3);
    g.addEdge(1,3,5);
    g.addEdge(1,4,1);

    g.addEdge(3,4,7);

    g.show();

    int n = 5;
    vector<int> distance(n,INT_MAX);
    g.dijkstra(0,distance);

    for(auto i:distance){
        cout<<i<<" ";
    }
}
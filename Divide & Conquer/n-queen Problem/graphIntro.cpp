#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class graph{
    unordered_map<int ,list<int>>adj;

    void addEdge(int u,int v){
        //direction =0 ->undirected
        //direction =1 ->directed

        //create an edge from u to v and v to u as graph is undirected

        adj[u].push_back(v);
        adj[v].push_back(u);


    }

    void printAdjList() {
    for(auto i:adj){
        cout<<i.first<< " ->";

    for(auto j : i.second){
        cout<<j << ", ";
    }
    cout<<endl;
    }
    }
};

int main(){

    int n,m;

    cout<<"Enter the Number of Nodes "<<endl;
    cout<<"Enter the Number of Edges "<<endl;

    graph g;

    for(int i=0 ;i<m;i++){
        int u,v;
        cin>>u>>v;

        //creating an undirected graph
        g.addEdge(u,v);
    }
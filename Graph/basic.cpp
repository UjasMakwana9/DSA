#include<bits/stdc++.h>
using namespace std;

// Adjacency matrix representation of graph
// Time Complexity is O(V^2)
// Space Complexity is O((V+1)^2)

// For Undireceted Graph 
vector<vector<int>> adjMatrixUndirected(int v, vector<pair<int,int>> edges){
    vector<vector<int>> adj(v+1,vector<int>(v+1,0));
    for(auto it: edges)
    {
        int u = it.first;
        int v = it.second;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    return adj;
}

// For direceted Graph 
vector<vector<int>> adjMatrixDirected(int v, vector<pair<int,int>> edges){
    vector<vector<int>> adj(v+1,vector<int>(v+1,0));
    for(auto it: edges)
    {
        int u = it.first;
        int v = it.second;
        adj[u][v] = 1;
    }
    return adj;
}

// Adjacency List representation of graph
// Space Complexity : O(V+1 + 2E)  ===> O(V+E)
// Time Complexity : O(V+1 + 2E)====> O(V+E) 
// Undirected Graph

vector<vector<int>> adjListUndirected(int v, vector<pair<int,int>> edges){
    vector<vector<int>> adj(v+1);
    for(auto it: edges)
    {
        int u = it.first;
        int v = it.second;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return adj;
}

// Directed Graph
vector<vector<int>> adjListDirected(int v, vector<pair<int,int>> edges){
    vector<vector<int>> adj(v+1);
    for(auto it: edges)
    {
        int u = it.first;
        int v = it.second;
        adj[u].push_back(v);
    }
    return adj;
}

// Adjacency Matrix for Weighted Graph
// For Undireceted Graph 
vector<vector<int>> adjMatrixWeightedUndirected(int v, vector<pair<int,pair<int,int>>> edges){
    vector<vector<int>> adj(v+1,vector<int>(v+1,0));
    for(auto it: edges)
    {
        int wt = it.first;
        int u = it.second.first;
        int v = it.second.second;
        adj[u][v] = wt;
        adj[v][u] = wt;
    }
    return adj;
}
// For Directed Graph
vector<vector<pair<int,int>>> adjMatrixWeightedDirected(int v, vector<pair<int,pair<int,int>>> edges){
    vector<vector<pair<int,int>>> adj(v+1);

    for(auto it: edges)
    {
        int wt = it.first;
        int u = it.second.first;
        int v = it.second.second;
        adj[u].push_back({v,wt});
    }
    return adj;
}

int main()
{

    int v = 5;
    vector<pair<int,int>> edges = {{0,1},{0,2},{1,2},{1,3},{2,4}};
    vector<vector<int>> adj = adjListDirected(v,edges);
    
    // // Print for Unit Weight Graph
    // for(int i=0;i<adj.size();i++)
    // {
    //     for(int j=0;j<adj[i].size();j++)
    //     {
    //         cout<<adj[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // Printing for Weighted Graph
    vector<pair<int,pair<int,int>>> edges1 = {{1,{0,1}},{2,{0,2}},{3,{1,2}},{4,{1,3}},{5,{2,4}},{12,{5,1}}};
    vector<vector<pair<int,int>>> adj1 = adjMatrixWeightedDirected(v,edges1);
    for(int i=0;i<adj1.size();i++)
    {
        cout<<i<<"----->";
        for(int j=0;j<adj1[i].size();j++)
        {
            cout<<adj1[i][j].first<<"-->"<<adj1[i][j].second<<" ";
        }
        cout<<endl;
    }

    return 0;
}
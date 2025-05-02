#include<bits/stdc++.h>


using namespace std;

// Time Complexity is O()

//Without considering the input size 
// Space Complexity is O(V)

//Considering the input size
// Space Complexity is O(V+E)
void bfs(int start , vector<vector<int>>&adj , vector<int>&vst){
    
    queue<int>q;
    q.push(start);
    vst[start] = 1;

    while(!q.empty()){
        int vertex = q.front();
        q.pop();
        cout<<vertex<<" ";

        for(int i = 0; i < adj[vertex].size() ; i++){
            if(vst[adj[vertex][i]]!=1){
                q.push(adj[vertex][i]);
                vst[adj[vertex][i]]=1;
            }
        }
    }
}

int main()
{
    vector<vector<int>> adj = {{},{2,6},{1,3,4},{2},{2,5},{4,8},{1,7,9},{6,8},{5,7},{6}};
    int start = 5;
    int nodes = 10;
    vector<int>vst(nodes,0);
    
    // This is for checking the connectivity of the graph
    while(true){
        
        bfs(start,adj,vst);
        int flag = true;
        for(auto it = vst.begin()+1;it!=vst.end();it++){
            if((*it)!=1){
                start = *it;
                flag = false;
                break;
            }
        }
        if(flag){
            break;
        }
    }

return 0;
}
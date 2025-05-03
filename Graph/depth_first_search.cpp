#include<bits/stdc++.h>


using namespace std;

// Space Complexity = O(V)
// Time Complexity = O(V+2E) ==> O(V+E)
void dfs(int node , vector<int>&vst , vector<vector<int>>&adj){
    stack<int>st;
    st.push(node);
    vst[node] = 1;

    while(!st.empty()){
        int vertex = st.top();
        st.pop();
        cout<<vertex<<" ";

        for(auto it: adj[vertex]){
            if(!vst[it]){
                st.push(it);
                vst[it] = 1;
            }
        }
    }
}
int main()
{
    vector<vector<int>> adj = {
        {},
        {2,3},
        {1,5,6},
        {1,4,7},
        {3, 8},
        {2},
        {2},
        {3 , 8},
        {4 , 7}
    };
    int start = 1;
    vector<int>vst(9,0);

    while(true){
        dfs(start,vst,adj);
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
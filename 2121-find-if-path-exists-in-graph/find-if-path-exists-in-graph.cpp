class Solution {
public:
void dfs(int node, vector<vector<int>>& adj,vector<bool>&visited){
    visited[node]=1;
    for(int  j=0;j<adj[node].size();j++){
        if(visited[adj[node][j]]==0){
            dfs(adj[node][j],adj,visited);
        }
    }
}


    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<bool>vis(n,0);
        vector<vector<int>>adj(n+1);
        for(int i=0;i<edges.size();i++){
            int u=edges[i][0];
            int v=edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);

        }

        dfs(source,adj,vis);

        if(vis[destination]==0) return false;
        return true;

        

        
    }
};
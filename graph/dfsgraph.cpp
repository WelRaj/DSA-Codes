#include<iostream>
#include<vector>
using namespace std;
 void dfs(int start,vector<int>adj[],vector<bool>& vis,vector<int>&ds){
         vis[start]=true;
         ds.push_back(start);
         for(auto it: adj[start]){
            if(!vis[it]){
                dfs(it,adj,vis,ds);
            }
         }
 }
 vector<int>dfsofgraph(int V, vector<int>adj[]){
              vector<bool> vis(V, false);  
               vector<int> ds;
                for (int i = 0; i < V; i++) {
        if (!vis[i]) {
            dfs(i, adj, vis, ds);
        }
    }
    return ds;
      }
int main(){
    int n,m;
      cout<<"n and m"<<endl;
      cin>>n>>m;
      vector<int>adj[n];
      for(int i=0; i<m; i++){
       int v,u;
       cout<<"u and v"<<endl;
       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
      }
      vector<int>ab=dfsofgraph(n,adj);
      cout << "Adjacency List:" << endl;
    for (int i = 0; i <ab.size(); i++) {
        cout << ab[i]<<" "; 
        cout << endl;
    }

      return 0;
}
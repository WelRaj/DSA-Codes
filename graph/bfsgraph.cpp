#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>bfsofgraph(int v,vector<int>adj[]){
    vector<int>visited(v,0);
    visited[0]=1;
    queue<int>q;
    q.push(0);
    vector<int>bfs;
    while(!q.empty()){
        int node = q.front();
         q.pop();
         bfs.push_back(node);
         for(auto it:adj[node]){
            if(!visited[it]){
              visited[it]=1;
              q.push(it);
            }
         }
    }
    return bfs;
         
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
      vector<int>ab=bfsofgraph(n,adj);
      cout << "Adjacency List:" << endl;
    for (int i = 0; i <ab.size(); i++) {
        cout << ab[i]<<" "; 
        cout << endl;
    }

      return 0;

}
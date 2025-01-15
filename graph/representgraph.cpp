#include<iostream>
#include<vector>
using namespace std;

int main(){
      int n,m;
      cout<<"n and m"<<endl;
      cin>>n>>m;
      vector<int>adj[n+1];
      for(int i=0; i<m; i++){
       int v,u;
      cout<<"u and v"<<endl;

       cin>>u>>v;
       adj[u].push_back(v);
       adj[v].push_back(u);
      }
      cout << "Adjacency List:" << endl;
    for (int i = 1; i <= n; i++) {
        cout << i << ": ";
        for (int j = 0; j < adj[i].size(); j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

      return 0;
}
/*Number of nodes (n): 5
Number of edges (m): 5
Edges provided:
1 → 2
2 → 1
4 → 5
5 → 4
3 → 4
This graph is undirected, so for each edge (u, v), both adj[u].push_back(v) and adj[v].push_back(u) are called. This means each edge appears twice in the adjacency list.

Step-by-Step Adjacency List Construction
Initialization:
We start with an empty adjacency list for n + 1 nodes:
adj = [[], [], [], [], [], []]

Adding Edges:
Edge 1 → 2:
Add 2 to adj[1] and 1 to adj[2].
adj = [[], [2], [1], [], [], []]

Edge 2 → 1:
Add 1 to adj[2] and 2 to adj[1].
adj = [[], [2, 2], [1, 1], [], [], []]

Edge 4 → 5:
Add 5 to adj[4] and 4 to adj[5].
adj = [[], [2, 2], [1, 1], [], [5], [4]]

Edge 5 → 4:
Add 4 to adj[5] and 5 to adj[4].
adj = [[], [2, 2], [1, 1], [], [5, 5], [4, 4]]

Edge 3 → 4:
Add 4 to adj[3] and 3 to adj[4].
adj = [[], [2, 2], [1, 1], [4], [5, 5, 3], [4, 4]]

*/
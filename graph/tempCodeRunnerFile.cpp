#include<iostream>
#include<vector>
using namespace std;
 void dfs(int start,vector<int>adj[],vector<bool>& vis,vector<int>&ds){
         vis[start]=true;
         ds.push_back(start);
         for(auto it: ad
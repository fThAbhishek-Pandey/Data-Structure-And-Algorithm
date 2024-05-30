#include <iostream>
#include<vector>
#include<list>
#include<unordered_set>
#include<queue>
#include<climits>
using namespace std ;
vector<list<int>>graph;
unordered_set<int> visited;
int v;
void add_edge (int src, int dest, bool bi_dir= true){
    graph[src].push_back(dest);
    if(bi_dir) graph[dest].push_back(src);
}
void bfs (int src,  vector<int> &dist){
    queue<int> qu;
    visited.clear();
    dist.resize(v, INT_MAX);
    dist[src]=0;
    visited.insert(src);
    qu.push(src);
    while (!qu.empty()){
        int curr= qu.front();
        qu.pop();
        for (auto nbh : graph[curr]){
            if (visited.find(nbh) == visited.end()) {
            qu.push(nbh);
            visited.insert(nbh);
            dist[nbh] = dist[curr]+ 1;
            }
        }
    }
}
int main() {
       int e;
      cin>>v>>e;
      graph.resize(v,list<int> ());
      while (e--){
        int src , dist;
        cin>>src>>dist;
        add_edge(src, dist);
      }
      int src;
      cin>>src;
      vector<int> dist;
      bfs(src,dist);
      for (auto ele : dist) cout<<ele<<" ";
    return 0;
}
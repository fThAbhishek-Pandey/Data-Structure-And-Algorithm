#include <iostream>
#include<vector> 
#include<list>
#include<unordered_set>
using namespace std ;
vector<list<int>> graph;
void add_Edge (int src,int dest,bool isNotbiDirected = true ){
        graph[src].push_back(dest);
        if (isNotbiDirected) graph[dest].push_back(src);
}
  void dfs (int src, unordered_set<int>& visited){
       visited.insert(src);
    //    cout<<src<<" ";
       for (auto nbh : graph[src]){
        if (!visited.count(nbh)){
            dfs (nbh,visited );
        }
       }
  }
  int connected_component(){
        int count =0;
        unordered_set<int> visited;
        for (int i=0;i<graph.size();i++){
            if (!visited.count(i)){
                count++;
                dfs(i, visited);
            }
        }
        return count;
  }
int main() {
    graph.clear();
    int v,e;
    cin>>v>>e;
    graph.resize(v);
     while (e--){
         int src,dest;
         cin>>src>>dest;
         add_Edge(src,dest);
     }
    cout<<"no of connected graph "<<connected_component()<<endl;
    return 0;
}
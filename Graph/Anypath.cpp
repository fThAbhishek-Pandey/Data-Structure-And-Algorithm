#include <iostream>
#include<vector>
#include<list>
#include<unordered_set>
using namespace std ;
vector<list<int>> graph;
unordered_set<int> visited;
vector<vector<int>> allpath;
void add_edge(int src, int dest , bool isnotDirected = true){
        graph[src].push_back(dest);
        if (isnotDirected)  graph[dest].push_back(src);
}
void dfs (int curr, int end, vector<int> path = {}){
    if (curr== end) {
       allpath.push_back(path);
      return ;
    }
   
    visited.insert(curr);
        for (auto nbh :graph[curr] ){
            if (!visited.count(nbh))  {
                path.push_back(nbh);
                dfs(nbh, end, path);
                path.pop_back();
            }
        }
        visited.erase(curr);
        return ;
}
int main() {
    // I love Abhishek ji 
    // cout << "NamasKar Abhishek ji !" <<endl;
    cout<<"enter the number of vertix : ";
     int v ;
     cin>>v;
     cout<<"enter the number of edge : ";
     int e;
     cin>>e;
     graph.resize(v, list<int>());
     while (e--){
        int src,dest;
        cin>>src>>dest;
        add_edge(src, dest);
     }
     cout<<"enter the number of source and destination : ";
     int src,dest;
     cin>>src>>dest;
     dfs (src,dest, {});
     for (int i=0; i<allpath.size();i++){
        for (int j=0; j< allpath[i].size(); j++){
            cout<<allpath[i][j]<<" ";
        }
        cout<<endl;
     }
     
    return 0;
}
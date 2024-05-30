#include <bits/stdc++.h>
using namespace std ;
vector<list<int>>graph;
int v;
void addEdge (int src,int dest , bool isnotdir= true){
    graph[src].push_back(dest);
    if (isnotdir) graph[dest].push_back(src);
}
// void display (){
//     for (int i=0; i< graph.size();i++){
//         for (auto ele: graph[i]){
//             cout<<ele<<" ";
//         }
//     }
// }
void topoBFS (){
       vector<int> inDegree (v,0);
       cout<<"weicome ";
       for (int i=0;i<v;i++){//  find indegree of vertex
        for (auto nbh : graph[i]){
            inDegree[nbh]++;
        }
       }
       // topological sorting start
       cout<<"topological sorting ";
       queue<int> qu;
       unordered_set<int> vist;
       for (int i=0; i<v;i++){
        if (inDegree[i]==0){
              qu.push(i);
              vist.insert(i);
        }
       }
       while (!qu.empty()){// bfs
           int node = qu.front ();
           qu.pop ();
           cout<<node<<" ";
            for (auto nbh : graph[node]){
                if(!vist.count(nbh)){
                    inDegree[nbh]--;
                    if(inDegree[nbh]==0) {
                        qu.push(nbh);
                        vist.insert(nbh);
                    }
                }
            }
       }
}
int main() {
     cin>>v;
     graph.resize(v,list<int> ());
     int e;
     cin>>e;
     while (e--){
        int src, dest;
        cin>>src>>dest;
        addEdge(src,dest, false);
     }
   //  display();
     topoBFS ();
    return 0;
}
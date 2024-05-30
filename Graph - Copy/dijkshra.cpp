#include <iostream>
#include<vector> 
#include <list> 
#include<unordered_map>
#include<unordered_set>
#include<climits> 
#include<queue>
using namespace std ;
vector<list<pair<int,int>>> graph;
int v;
void addEdge (int src, int dest, int wt, bool bidir = true){
        graph[src].push_back({dest, wt});
        if (bidir) graph[dest].push_back({src,wt});
}
unordered_map<int,int> dijksha (int src){
    cout<<"Welcome dijksha "<<endl;
    unordered_map<int,int> mp;
    vector<int> via(v);
    unordered_set<int> visit;
    for (int i=0;i<v;i++){
        mp[i]= INT_MAX;
    }
    mp[src] =0;
    priority_queue<pair<int,int>, vector<pair<int,int>> , greater<pair<int,int>>> pq;
    pq.push({0,src});
    while (!pq.empty()){
         pair<int,int> curr = pq.top();
         pq.pop();
       
         if(visit.count(curr.second)) continue;
           cout<<curr.second<<" ";
         visit.insert(curr.second);
         for (auto nbh : graph[curr.second]){
             int d = curr.first+ nbh.second;
            if(!visit.count(nbh.first)&&mp[nbh.first]>d){
                 pq.push({d,nbh.first});
                 mp[nbh.first] = d;
                 via[nbh.first] = curr.second;
            }
         }
    }
    return mp;

}
 unordered_set<int> vis;

void display (int i=0){
  //  vis.insert(i);
   for(auto pr :graph[i]){
      if(!vis.count(pr.first)){
        cout<<pr.first<<" "<<pr.second<<" ";
      }
   }
   cout<<endl;
}
int main() {
    int e;
    cin>>v>>e;
    graph.resize(v);
    while (e--){
        int src,dest, wt;
        cin>>src>>dest>>wt;
        addEdge(src,dest,wt);
    }
    ///display();
    int src;
    cout<<"enter the source :";
    cin>>src;
    unordered_map<int,int> ans = dijksha(src);
    for ( auto ele: ans){
        cout<<ele.first<<" "<<ele.second<<endl;

    }
    return 0;
}
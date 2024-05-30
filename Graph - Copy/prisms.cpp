#include <iostream>
#include<vector>
#include<queue> 
#include <unordered_map>
#include<unordered_set> 
#include<list>
#include<climits>
#define ll long long int
#define pp pair<int, int> 
using namespace std ;
vector<list<pp>> gr;
int v;
void addEdge (int src, int dest,int wt, bool bidir = true){
            gr[src].push_back({dest,wt});
            if(bidir) gr[dest].push_back({src, wt});
}
ll prism (int src){
      priority_queue<pp, vector<pp> ,greater<pp> > pq;
      unordered_map<int ,int> mp;
      unordered_set<int> vis;
      vector<int> par(v+1);
      pq.push({0,src});
      for (int i=1;i<v+1;i++){
        mp[i]= INT_MAX;
      }
      mp[src]=0;
      int totCount =0;// 0 -> v-1 edge
      ll result = 0ll;
      while (totCount<=v&& !pq.empty()){
        pp curr = pq.top();
        cout<<curr.second<<" ";
        pq.pop();
        if (vis.count(curr.second))  continue;
        vis.insert(curr.second);
        totCount++;
        result += curr.first;
        for (auto nbh : gr[curr.second]){
            if(!vis.count(nbh.first)&& mp[nbh.first]> nbh.second){
                pq.push ({nbh.second, nbh.first});
                par[nbh.first]= curr.second;
                mp[nbh.first] = nbh.second;
            }
        }
      }
      return result;
}
int main() {
    int e;
    cin>>v>>e;
    gr.resize(v+1);
    while (e--){
        int src,dest,wt;
        cin>>src>>dest>>wt;
        addEdge (src,dest,wt);
    }
int src;
cin>>src;
cout<<prism(src)<<endl;

    return 0;
}
#include <iostream>
#include<vector>
#include<algorithm>
#define ll  long long int 
using namespace std ;
int find (vector<int> &parent , int a){
    return parent[a] = (parent[a]==a) ? a: find(parent, parent[a]);
}
void Union (vector<int> & par, vector<int> &rank , int a, int b){
    a= find (par, a);
    b= find (par, b);
    if (rank[a]>= rank[b]){
        rank[a]++;
        par[b]=a;
    }
    else {
        rank[b]++;
        par[a] =b;
    }
}
struct  edge {
    int src;
    int dest;
    int wt;
};
bool cmp (edge e1, edge e2) {
    return e1.wt<e2.wt;
}
ll kruskal (vector<edge> &input, int n, int e){
    sort (input.begin(),input.end(),cmp);
    vector<int> parent (n+1);
    vector<int> rank (n+1, 1);
    for (int i=0; i<=n;i++){
                  parent[i] = i; 
    }
    int edgeCount =0;//n-1
    int i=0;
    ll ans=0ll;
    while (edgeCount < n-1&&i<input.size()){
           edge curr = input[i] ;// because input is sorted so we will get min wt edge
           int srcPar = find (parent , curr.src);
           int destPar = find (parent , curr.dest);
           if (srcPar != destPar){
            // include edge as this will nat make cycle 
            Union (parent,rank, srcPar, destPar);
              ans += curr.wt;
              edgeCount++;
           }
           i++;// doesn't matter u picked the last edge or not , we still need to go to next edge
    }
return ans;
}
int main() {
    int n,e;
    cin>>n>>e;
    vector <edge> v(e);
    for (int i=0; i<e; i++){
        cin>>v[i].src>>v[i].dest>>v[i].wt;
    }
    cout<<kruskal(v,n,e)<<endl;
    return 0;
}
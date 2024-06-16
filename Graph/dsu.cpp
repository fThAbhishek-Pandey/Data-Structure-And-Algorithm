#include <iostream>
#include<vector>
using namespace std ;
vector<int> parent,Rank;
int find (int x){
    if(parent[x]==x) return x;
    return parent[x]= find (parent[x]);
}
void Union (int a,int b){
    a = find(a);
    b= find(b);
    if (Rank[a]>= Rank[b]){
        Rank[a]++;
        parent[b]= a;

    }
    else {
        Rank[b]++;
        parent[a]=b;
    }
}
int main() {
    int n, m;
    cin>>n>>m;
    parent.resize(n+1);
    Rank.resize(n+1,0);
     for (int i=0;i<=n;i++){
        parent[i]=i;
     }
     while (m--){
        string str;
        cin>>str;
        if (str=="unioun"){
            int x,y;
            cin>>x>>y;
            Union (x,y);
        }
        else {
            int x;
            cin>>x;
          cout<<find(x)<<endl;
        }
     }
    
    return 0;
}
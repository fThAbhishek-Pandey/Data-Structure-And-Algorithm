#include <iostream>
#include<vector>
#include<list> 
using namespace std ;
vector<list<int>> adjListGph;
void add (int src, int dest, bool isUnDirected = true){
    adjListGph[src].push_back(dest);
    if (isUnDirected) adjListGph[dest].push_back(src);
       return;
}
void display (){
    for (int i=0;i<adjListGph.size();i++){
        cout<<i<<" --> ";
        for ( auto ele :adjListGph[i] ){
            cout<<ele<<" , ";
        }
        cout<<endl;
    }
    return ;
}
int main() {
    // I love Abhishek ji 
    //cout << "NamasKar Abhishek ji !" <<endl;
     cout<<"enter the number of vertex : ";
     int n;
     cin>>n;
     adjListGph.resize(n,list<int>());
     cout <<"enter the number of edges : ";
     int edge;
     cin>>edge;
     cout<<"enter the neighbour vertex \n";
     while (edge--){
           int vtx;
           int nbhVtx;
           cin>>nbhVtx>>vtx;
           add(vtx,nbhVtx);
     }
     display();
    return 0;
}
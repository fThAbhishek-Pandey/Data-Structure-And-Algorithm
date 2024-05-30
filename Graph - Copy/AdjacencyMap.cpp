#include <iostream>
#include<vector> 
#include<unordered_map>
using namespace std ;
vector<unordered_map<int,int>> adjMapgph;
void add (int src, int dest,int wt, bool isNotDirected= true) {
          adjMapgph[src][dest]= wt;
          if (isNotDirected) adjMapgph[dest][src] =wt;
          return;
}
void display (){
       for (int i =0;i<adjMapgph.size();i++){
           cout<<i<<" --> ";
           for (auto ele :adjMapgph[i]){
            cout<<"( "<<ele.first<<" , "<<ele.second<<" ) , ";
           }
           cout<<endl;
       }
}
int main() {
    // I love Abhishek ji 
    //cout << "NamasKar Abhishek ji !" <<endl;
    cout<<"enter the number of vertex : ";
    int n;
    cin>>n;
    adjMapgph.resize(n,unordered_map<int,int> ());
    cout<<"number of edge : ";
    int m;
    cin>>m;
    cout<<"enter the conjugative vertix and their wt \n";
    while (m--){
        int vert, nbhVtx, wt;
        cin>>vert>>nbhVtx>>wt;
        add(vert,nbhVtx, wt);
    }
    display();
    return 0;
}
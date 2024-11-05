#include<iostream>
#include<vector>
using namespace std;
bool find_target(vector<vector<int>> vec,int tar);
int main (){
    int n,m;
    cout<<"enter the dimention of matrics ;";
    cin>>n>>m;
    vector <vector<int>> vec;
    for (int i=0;i<n;i++){
        vector<int> help ;
        for (int j=0;j<m;j++){
            int hel ;
            cin>>hel;
            help.push_back(hel);

        }
        vec.push_back(help);
    }
    int tar;
    cin>>tar;
    if(find_target(vec,tar)) cout<<"element is present";
     else cout<<"element is absent ";
    return 0;
}
bool find_target(vector<vector<int>> vec,int tar){
    int lo=0,hi=vec.size()*vec[0].size()-1;
    while(lo<=hi){
        int mid = lo+ (hi-lo)/2;
        int i=mid/vec.size();
        int j= mid/vec[0].size();
        if (vec[i][j]==tar ) return true;
        else if (vec[i][j]<tar) lo= mid+1;
        else hi = mid-1;
    }
    return false;
}

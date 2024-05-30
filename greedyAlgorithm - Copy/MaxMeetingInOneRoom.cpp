#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmpr (vector<int> meet1,vector<int> meet2){
    return meet1[1]<meet2[1];
}
vector<int> meet ( vector<vector<int>>time  ){
    sort(time.begin(),time.end(),cmpr);
    int count =0;
    int last_time =0;
    vector<int> ans;
    for (int i=0;i<time.size();i++){
        if (time[i][0]>last_time ){
            count++;
            ans.push_back(i+1);
            last_time = time[i][1];
        }
    }
    cout<<"total number of meeting : "<<count<<endl;
    return ans;
}
int main (){
     int n;
     cout<<"enter the total Number of meeting : ";
     cin>>n;
     vector<vector<int>> vec;
     for (int i=0;i<n;i++){
        vector<int> help;
        for (int j=0;j<2;j++){
            int ele;
            cin>>ele;
            help.push_back(ele);
        }
        vec.push_back(help);
     }
        vector<int> ans= meet(vec);
        for (int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        return 0;
}
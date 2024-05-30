#include<iostream>
#include<queue>
#include<vector> 
using namespace std;
int kthlar(vector <int> vec,int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<vec.size();i++){
        pq.push(vec[i]);
        if (pq.size()>k) pq.pop();
    }
    int ans= pq.top();
    return ans;
}
int main (){
    vector<int> vec;
    int n;
    cout<<"enter the number of element : ";
    cin>>n;
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);
    }
    int k;
    cout<<"enter the value of k : ";
    cin>>k;
    cout<<kthlar(vec,k)<<" ";
    
}
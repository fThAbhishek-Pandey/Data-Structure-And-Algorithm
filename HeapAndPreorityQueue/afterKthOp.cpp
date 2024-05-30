#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int afterkthOp(vector <int> vec,int k){
    priority_queue<int ,vector<int> ,greater<int> > pq;
    for(auto ele: vec){
        pq.push(ele);
    }
    while (k--){
        int v1= pq.top();
        pq.pop();
        int v2= pq.top();
        pq.pop();
        pq.push(v1*v2);
    }
    while (pq.size()!=1){
        pq.pop();
    }
    return pq.top();
}
int main (){
    int n;
    cout<<"enter the lenght of vector : ";
    cin>>n;
    vector<int> vec;
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        vec.push_back(ele);

    }
    int op;
    cout<<"enter the number of operation : ";
    cin>>op;
    cout<<afterkthOp(vec,op);


}
#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;
vector<int> pairSum (vector<int> ,int);
int main (){
    cout<<"enter the number of element : ";
    int n;
    cin>>n;
    cout<<"enter the element of vector \n";
    vector<int> vec(n);
    for (int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<"enter the target sum : ";
    int tar;
    cin>>tar;
    vector<int> ans=pairSum(vec,tar);
    cout<<ans[0]<<" "<<ans[1]<<endl;

}
vector<int> pairSum (vector<int> vec,int tarSum){
    vector<int> ans(2,-1);
    unordered_map<int ,int> m;
    for (int i=0;i<vec.size();i++){
        if (m.find(tarSum-vec[i])!=m.end()) {
            ans[0]= m[tarSum-vec[i]];
            ans[1]= i;
            return ans;
        }
        else {
            m[vec[i]]= i;
        }
       
    }
     return ans;
}

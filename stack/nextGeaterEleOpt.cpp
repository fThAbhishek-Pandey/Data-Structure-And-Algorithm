#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> nge (vector<int>vec){
    vector<int> ans (vec.size(),-1);
    stack<int> st;
    st.push (0);
    for (int i=1;i<vec.size();i++){
        while (!st.empty()&&vec[i]>vec[st.top()]){
         ans[st.top()]= vec[i];
         st.pop();
        }
        st.push(i);
    }
    while (!st.empty()){
        ans[st.top()]=-1;
        st.pop();
    }
    return ans;
}
int main(){
    cout<<"enter the size of vector : ";
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    vector<int> ans= nge (vec);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return 0;
}

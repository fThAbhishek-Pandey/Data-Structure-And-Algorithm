#include<iostream>
#include<stack>
using namespace std;
void display (stack<int>st){
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return;
}
void insert_bottom (stack<int> &st,int x){
    stack<int> temp;
    while (!st.empty()){
        int curr=st.top();
        st.pop();
        temp.push(curr);
    }
    st.push(x);
    while (!temp.empty()){
        int curr=temp.top();
        temp.pop();
        st.push(curr);
    }
    return;
    
}

int main (){
    stack<int> st;
    cout<<"enter the size of stack : ";
    int n;
    cin>>n;
    cout<<"enter the element of stack\n";
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        st.push(ele);
    }
    cout<<"enter the inserting value\n";
    int x;
    cin>>x;
    insert_bottom (st,x);
    display(st);
    return 0;
}
#include<iostream>
#include<stack>
using namespace std;
void display (stack<int> st){
    while (!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return;
}
void insert_bottUrec(stack<int>&st,int x){
    if (st.empty()){
        st.push(x);
        return;
    }
    int curr= st.top();
    st.pop();
    insert_bottUrec(st,x);
    st.push(curr);
    return;
}
int main (){
    cout<<"enter the size of stack\n";
    int n;
    cin>>n;
    stack<int> st;
    cout<<"enter the element of stack\n";
    for(int i=0;i<n;i++){
        int ele ;
        cin>>ele;
        st.push(ele);
    }
    cout<<"enter the element which inserting : ";
    int x;
    cin>>x;
    insert_bottUrec(st,x);
    display(st);
    return 0;

}
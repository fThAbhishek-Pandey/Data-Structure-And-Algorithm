#include<iostream>
using namespace std;
int stack[20];
int top=-1;
void push(int val){
    if (top>=20) {
        cout<<"overflow";
        return;
    }
    top++;
    stack[top] = val;

}
int pop(){
    if (top==-1){
        cout<<"underflow"<<endl;
        return -1;
    }
    int pope = stack[top];
    top--;
    return pope;
}
int topele (){
    if (top==-1){
        cout<<"underflow"<<endl;
        return -1;
    }
    return stack[top];
}

int main (){
    push(23);
    push(45);
    push(48);
    push(56);
    cout<<pop()<<endl;
    cout<<topele()<<endl;
}
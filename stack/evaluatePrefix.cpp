#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int culc (int v1,int v2,char op ){
       if (op=='*') return v1*v2;
       if (op=='/') return v1/v2;
       if (op=='+') return v1+ v2;
       if(op=='-') return v1-v2;
       if (op=='^') return v1^v2;
}
int eval(string str){
    stack<int> st;
    for (int i= str.size()-1;i>=0;i--){
        if (isdigit(str[i])) st.push (str[i]-'0');
        else {
            int v2= st.top();
            st.pop();
            int v1= st.top();
            st.pop();
            st.push(culc(v1,v2,str[i]));
        }
    }
    return st.top();
}
int main (){
    cout<<"enter your expression : ";
    string str;
    cin>>str;
    cout<<"the value of your expression is : "<<eval(str)<<endl;

}
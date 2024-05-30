#include<iostream>
#include<math.h>
#include<stack>
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
    for (int i=0;i<str.length();i++){
       if (isdigit(str[i])) st.push(str[i]-'0') ;
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
cout<<"enter the expression : ";
string str;
cin>>str;
cout<<"the value of expression is : "<<eval(str);
return 0;
}

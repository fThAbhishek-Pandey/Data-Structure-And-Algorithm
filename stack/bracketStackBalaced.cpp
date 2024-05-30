#include<iostream> 
#include<string>
#include<stack>
using namespace std;
bool isValid(string str){
    stack<char> st;
    for (int i=0;i<str.size();i++){
        if (str[i]=='('||str[i]=='{'||str[i]=='['){
            st.push(str[i]);
        }
        else if (str[i]==')'&&!st.empty()&&st.top()=='('){
            st.pop();
        }
         else if (str[i]==']'&&!st.empty()&&st.top()=='['){
            st.pop();
        }
         else if (str[i]=='}'&&!st.empty()&&st.top()=='{'){
            st.pop();
        }
        else return false;
    }
    return st.empty();
}
int main (){
    cout<<"enter the sequence of brackets \n";
    string str;
    cin>>str;
    if (isValid(str)) cout<<"it is valid paranthesis \n";
    else cout<<"it is not a valid paranthesis group\n";
    return 0;

}
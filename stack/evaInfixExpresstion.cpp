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
int prcedence (char op){
    if (op=='^') return 3;
    if (op=='/'||op=='*') return 2;
    if (op=='+'||op=='-') return 1;
    return -1;
}
int eval (string str){
    stack<int> nums;
    stack<char> ops;
    for (int i=0;i<str.size();i++){
      if (isdigit(str[i])) nums.push(str[i]-'0');
      else if (str[i]=='('){
        ops.push('(');
      }
      else if (str[i]==')'){
        while (ops.top()!='('){
        int v2= nums.top();
        nums.pop();
        int v1=nums.top();
        nums.pop();
        nums.push(culc(v1,v2,ops.top()));
        ops.pop();
        }
        if (!ops.empty())ops.pop();
      }
      else if (prcedence(str[i]>=prcedence(ops.top()))){
        ops.push(str[i]);
      }
     else {
        while (nums.size()>=2&&prcedence(str[i]<=prcedence(ops.top()))){
            int v2= nums.top();
            nums.pop();
            int v1 = nums.top();
            nums.pop();
            nums.push(culc(v1,v2,ops.top()));
            ops.pop();
        }
        ops.push(str[i]);
     }
    }
     while (nums.size()>=2&&!ops.empty()){
        int v2= nums.top();
            nums.pop();
            int v1 = nums.top();
            nums.pop();
            nums.push(culc(v1,v2,ops.top()));
        ops.pop();
     }
    
    return nums.top();
 }
   
int main (){
cout<<"enter the expression : ";
string str;
cin>>str;
cout<<"the value of expression is : "<<eval(str)<<endl;
return 0;
}
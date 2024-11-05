#include<iostream>
#include<vector>
#include<string>
using namespace std;
void f(string &str,int i,string res,vector<string> &li);
int main (){
    vector<string>res;
    string str= "abc";
    f(str,0,"",res);
    for (int i=0;i<res.size();i++){
         cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}
void f(string &str,int i,string res,vector<string> &li){
      if (i==str.length()){
        li.push_back(res);
        return;
      }
      f(str,i+1,res+str[i],li);
      f(str,i+1,res,li);
      return;
}

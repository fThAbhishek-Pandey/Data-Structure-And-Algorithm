#include <iostream>
#include <vector>
using namespace std ;
vector<string> ans;
void f(string str, string str2 , int i=0){
    if (str.size()== 0) {
            cout<<str2<<"j ";
            ans.push_back(str2);
            return;
    }
    
    for (int j=0;j< str.size();j++){
        string str1 = str.substr(0,j)+ str.substr(j+1,str.size()-j-1);
        cout<<str1<<" ";
        f(str1, str2+ str[j], i+1);
    }
    cout<<i<<"k\n";
    return ;
}
int main() {
    string testcase= "abc";
    f(testcase,"",0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
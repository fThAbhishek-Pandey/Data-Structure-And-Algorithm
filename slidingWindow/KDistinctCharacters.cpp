#include <iostream>
#include<unordered_map>
#include<string>
using namespace std ;
int isValid (string str){
        unordered_map<char,int> mp;
        for(int i=0;i<str.size();i++){
           mp[str[i]]++;
        }
        int size= mp.size();
        // cout<<size<<" ";
        return size;
}
int main() {
    string  s = "abcbdbdbbdcdabd";
    int k=2;
    string ans ="";
    for(int i=0,j=0;i<s.size()&&j<s.size();){
        string help = s.substr(i,j-i+1);
        int size= isValid(help);
        if(size==k){
             int size= j-i+1;
             if(ans.length()< size)  ans = help;
             j++;
           }
           else if(size <k)   j++;
           else    i++;
    }
    cout<<"ans : "<<ans<<endl;
    return 0;
}
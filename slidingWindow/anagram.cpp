#include <iostream>
#include<unordered_map>
using namespace std ;
bool isAnagram ( string str, unordered_map<char,int> mpTar){
          cout<<str<<" ";
          for(int i=0;i<str.size();i++){
            cout<<mpTar[str[i]]<<" ";
             mpTar[str[i]]--;
          }
          int sum=0;
          for(auto it : mpTar){
              if(it.second != 0) return false;
          }
          cout<<sum<<" ";
          return true;
}
int main() {
    string str = "gotxxofgxdogt";
    string tar = "got";
    unordered_map<char,int> mp;
    int count=0;
    for(int i=0;i<tar.size();i++){
            mp[tar[i]]++;
    }
    int k = tar.size();
    for(int i= 0;i+k<= str.size();i++){
       if(isAnagram(str.substr(i,k),mp)) {
        count++;
       }
    }
    cout<<"ans : "<<count<<endl;
    return 0;
}
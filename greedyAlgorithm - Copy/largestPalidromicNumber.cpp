#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std ;
bool vaild_palidrome (unordered_map <int,int> mp){
    int count =0;
    for (int i=0;i<=9;i++){
        if (mp.count(i)){
            if (mp[i]%2!=0) count++;// if the element is present odd time 
            if (count>1) return false;
        }
    }
    return true;
}
 string maxPalidrome (string num){
    int len =num.size();
    unordered_map<int,int> mp;
    for (int i=0;i<len;i++){
            mp[num[i]-'0']++;
        
    }
    if (!vaild_palidrome(mp) ) return "invalid validrome !!\n";
    vector<char> paliNum(len);
    int front =0; 
    for (int i=9;i>=0;i--){
            if (mp[i]%2!=0){
                paliNum[len/2]= (char) (i+48);
                mp[i]--;
            }
            while (mp[i]>0){
                paliNum[front]= paliNum[len-front-1]= (char) (i+48);
                mp [i]-=2;
                front++;
            }
    }
    string str= "";
    for (int i=0;i<paliNum.size();i++){
        str+= paliNum[i];
    }
    return str;
 }

int main() {
    // I love Abhishek ji 
   cout<<"enter the largest number : ";
   string str;
   cin>>str;
    cout<<"The desired palidrome is : "<<maxPalidrome(str);
    
    return 0;
}
#include <iostream>
#include<vector> 
using namespace std ;
int smallestNum (int d,int s){
    if (9*d<s) return -1 ;
    vector<char> v(d,'0');
    int i=0;
    s--;
    for ( i=d-1;i>0;i--){
       if (s<9)  break;
        v[i] ='9';
        s-= 9;
    }
   if (i==0)   v[i]= char(s+ 1+'0') ;         
    else {
            v[0]='1';
            v[i]= char (s+'0');
    }
    int num=0;
    for (int i=0;i<d;i++){
         num= num*10 + int (v[i]-'0');
    }
    return num;
}
int main() {
    // I love Abhishek ji 
    //  cout << "NamasKar Abhishek ji !" <<endl;
     int d, s;
     cout<<"enter the sum of digit : ";
     cin>>d;
     cout<<"enter the number of digit : ";
     cin>>s;
     cout<<"the desired number is :  "<<smallestNum (d,s)<<endl;
    return 0;
}
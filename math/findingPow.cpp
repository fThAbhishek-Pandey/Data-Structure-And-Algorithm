#include<iostream>
using namespace std;

int main (){
     int x,n;
     cout<<"enter number : ";
     cin>>x;
     cout<<"enter pow : ";
     cin>>n;
     int res=1;
     while (n>0){
            if (n%2==1) res*=x;
            x*=x;
            n/=2;
     }
     cout<<res<<" "<<endl;
}
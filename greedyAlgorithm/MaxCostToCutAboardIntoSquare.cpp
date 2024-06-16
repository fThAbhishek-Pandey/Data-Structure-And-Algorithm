#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std ;
bool cmp (int x,int y) {
   return x>y;
} 
ll minCostTobreakGrid (int n, int m,vector<ll> vertical,vector<ll> horizontal ){
    sort(vertical.begin(),vertical.end(),cmp);
    sort(horizontal.begin(),horizontal.end(),cmp);
    int hz=1,vr=1;// at initially there is only one block 
    int h=0,v=0;// initially both pointer pointed 0th position 
    ll ans=0;
    while (h<horizontal.size()&&v< vertical.size()){
        if (horizontal[h]>vertical[v]){
                ans+= horizontal[h]*hz;
                h++;
                vr++;
        }
        else {0
            ans+= vertical[v]*vr;
            v++;
            hz++;
        }
    }
    while (h<horizontal.size()){
            ans+= horizontal[h]*hz;
           h++;
           vr++;
    }
 while (v<vertical.size()){
            ans+= vertical[v]*vr;
            v++;
            hz++;
 }
    return ans;
}

int main() {
    // I love Abhishek ji 
    cout << "enter the length and width of rectangle  !" <<endl;
    int l,b;
    cin>>l>>b;
    cout<<"\nenter the horizonetal coast : ";
    vector<ll>  horizontal;
    for (int i=0;i<l-1;i++){
        int x;
        cin>>x;
        horizontal.push_back(x);
    }
    cout<<"\nenter the vertical cost : ";
    vector<ll>  vertical;
    for (int i=0;i<b-1;i++){
        int x;
        cin>>x;
        vertical.push_back(x);
    }
 cout<<" the minimam cost of cutting the board is : "<<minCostTobreakGrid(l,b,vertical,horizontal);

    return 0;
}
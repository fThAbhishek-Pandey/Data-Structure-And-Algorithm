#include<bits/stdc++.h>
using namespace std;
    int latestTimeCatchTheBus(vector<int>& buses, vector<int>& passengers, int capacity) {
        sort(passengers.begin(),passengers.end());       sort(buses.begin(),buses.end());
        int i=0,j=0;
        while (i<buses.size()){ 
            int cap= capacity;
            while((cap--)&&j<passengers.size()){
                if (buses[i]>=passengers[j]) j++;
            }
            i++;
        }
         cout<<passengers[j]<<" "<<passengers[j-1]<<" "<<passengers[j-2]<<endl;
        if ((passengers[j-1]-1)==passengers[i-2]) return (--passengers[j-2]);
       
        return passengers[j-1]-1;
    }
int main () {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);// FOR GETTING input form input,text
    freopen("output.txt","w",stdout);// for writing output to output.txt
    #endif 
    // Never Give Up 
     int t;
     cin>>t;
     while (t--){
         vector<int> b;
         int n;
           cin>>n;
         for (int i=0;i<n;i++){
            int ele;
            cin>>ele;
            b.push_back(ele);
         }
         int m;
         cin>>m;
         vector<int> p;
         for (int i=0;i<m;i++){
            int ele;
            cin>>ele;
            p.push_back(ele);
         }
         int c;
         cin>>c;
         cout<<latestTimeCatchTheBus(b,p,c)<<endl;
     }
    return 0;
}
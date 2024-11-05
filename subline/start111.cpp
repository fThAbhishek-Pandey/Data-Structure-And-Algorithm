#include<bits/stdc++.h>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);// FOR GETTING input form input,text
	freopen("output.txt","w",stdout);// for writing output to output.txt
	#endif 
	// Never Give Up 
     int t;
     cin>>t;
     while (t--){
     	int x,y,z;
     	cin>>x>>y>>z;
     	int k= (x*y)/2;
     	if(k<z) cout<<"yes"<<endl;
     	else cout<<"no"<<endl;

     }
	return 0;
}
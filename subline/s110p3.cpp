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
     	int n,x,k;
     	cin>>n>>x>>k;
     	int g = (n-x)%k;
     	x%=k;
     	cout<<abs(x-g)<<endl;

     }
	return 0;
}
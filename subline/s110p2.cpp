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
     	 int x,n;
     	cin>>x>>n;
     	int k= n/100;
     	if (n%100==0) {
     		if (k<=x) cout<<0<<endl;
     		else cout<<k-x<<endl;
     	}

     	else {
     		k++;
     		if (k<=x) cout<<0<<endl;
     		else cout<<k-x<<endl;
     	}

     }
	return 0;
}
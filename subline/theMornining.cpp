#include<bits/stdc++.h>
using namespace std;
 int run (int i,int f){
 	if (f==0) f=10;
 	if (i==0) i=10;
 	return f-i;
 	}
int main (){
	#ifndef ONLINE_JUDGE
	// FOR GETTING input form input,text
	freopen("input.txt","r",stdin);
	// for writing output to output.txt
	freopen("output.txt","w",stdout);
	#endif 
	int t;
	cin>>t;
	while (t--){
		int intu=0;
		int i=0;
		int n;
		cin>>n;
		int s=1000;
		int arr[4];
		while (4>i){
			int k=n/s;
			arr[i++]=k;
			 n%=s;
			 s/=10;
			// cout<<arr[i-1];
		}
	//	cout<<endl;

		i=0;
		int j=1;
		while (4>i){
          intu += abs(run(j,arr[i]))+1;
          j =arr[i++];
        
		}
          cout<<intu<<endl;

	}enum #include<bits/stdc++.h>
	using namespace std;
	/*"देह धरे का दंड है, सब काहू को होय ।
	ज्ञानी भुगते ज्ञान से, अज्ञानी भुगते रोय॥"*/
	int main (){
		#ifndef ONLINE_JUDGE
		// FOR GETTING input form input,text
		freopen("input.txt","r",stdin);
		// for writing output to output.txt
		freopen("output.txt","w",stdout);
		#endif 
		int t;
		cin>>t;
		while (t--) {
	        
		}
		return 0;
	}
	{
		
	};
	return 0;
	
}a2k		
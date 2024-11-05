#include<bits/stdc++.h>
using namespace std;
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	// Never Give Up,  manzil dur nhi hai
    int t;
    cin>>t;
    while (t--){
           int n,x,y;
           cin>>n>>x>>y;
           vector<int> arr(n);
           int sum=0;
           for(int i=0;i<n;i++){
           	  int ele;
           	  cin>>ele;
           	  int k= x*ele;
           	  if (k<=y) sum += x*ele;
           	  else sum += y;
           }
           cout<<sum<<endl;

    }
	return 0;  
}
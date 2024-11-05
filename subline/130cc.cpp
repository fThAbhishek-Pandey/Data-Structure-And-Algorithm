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
           int x,y;
           cin>>x>>y;
          int m=(x%10)*10+ x/10;
          int n=(y%10)*10+ y/10;
          // cout<<m<<"  n= "<<n<<endl;
           if(x>=y ||x>=n ||m>=y||m>=n) cout<<"yes"<<endl;
           else cout<<"NO"<<endl; 
    }
	return 0;  
}
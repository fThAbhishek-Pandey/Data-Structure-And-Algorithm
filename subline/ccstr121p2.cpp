#include<bits/stdc++.h>
using namespace std;
unordered_set<int> vis;
// int f (int n){
// 	if(n<=0) return 0;
// 	vis.insert(n);
//          if (vis.count(n-1)) return f(n-1);
//          else return max (f(n-1), 1+f(n-1));
//          vis.erase(n);
// }
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
           int n ;
           cin>>n;
          
          if (n%2==0) cout<<n/2<<" "<<n/2<<endl;
          else  cout<<n/2 +1<<" "<<n/2<<endl;
    }
	return 0;  
}
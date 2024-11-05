#include<bits/stdc++.h>
using namespace std;
int x,  y,  m;
int f (int tot )
  {     
	   if (tot>= m)   	return 0;
	   int k1 = tot, k2 = tot;
	   if (m > (x+tot))  k1 = f (tot + x);
	   if ( m>(tot+y))   k2 = f (tot + y);   
	   return max ( k1 ,k2 );
}     
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
           //int x,y, m;
           cin>>x>>y>>m;
           int mx =0; 
           int k = f(0);
           for (int i=1;i< m;i++){
           	if( i*x>m ) break ;
           	for (int j=0; j<=m;j++){
           		  int k= j*y + i*x;
           		  if ( k <= m) mx = max (mx,k);
           	}
           }

          
           cout<<k<<endl;
    }
	return 0;  
}
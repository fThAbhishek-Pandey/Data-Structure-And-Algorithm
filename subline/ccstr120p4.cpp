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
            //  x = min(x,y);
            //  y= max (x,y);
            // if (y%x==0) cout<<x<<endl;
            // else cout<<y%x<<endl;
            while (!x){
            	if (x>y) swap(x,y);
            	else {
            		int k=x;
            		x=y-x;
            		y=x;
            	}
            }
            cout<<y<<endl;
    }
	return 0;  
}
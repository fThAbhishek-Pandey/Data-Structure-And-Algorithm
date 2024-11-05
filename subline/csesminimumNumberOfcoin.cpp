#include<bits/stdc++.h>
using namespace std;
vector<int> coins;
int f(int i, int n,int x,int k){
	if (k>x) 
		int count = 
		for (int j=0;j<n;j++){
             if (coins[j]+k< x) break;
             count += min(f())
		}
}
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	// Never Give Up,  manzil dur nhi hai
           int n,x;
           cin>>n>>x;
           coins.resize(n);
           for (int i=0; i<n;i++){
           	cin>>coins[i];
           }

	return 0;  
}
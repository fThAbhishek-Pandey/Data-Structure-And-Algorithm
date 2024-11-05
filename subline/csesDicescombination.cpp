#include<bits/stdc++.h>
using namespace std;
vector<long long > dp;
int const m= 1e9+7;
long long f (int n,  int k){
	if (k>n) return dp[k]= 0;
	if (n==k) return dp[k]= 1 ;
	if (dp[k]!= -1) return dp[k];
	long long  count =0;
	for (int i=1;i<=6;i++){
		count += f (n, k+i);
	}
	return dp[k] =count%m;
}
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	// Never Give Up,  manzil dur nhi hai
    int n;
    cin>>n;
    dp.resize(1e7,-1);
     cout<<f(n,0)<<endl;
	return 0;  
}
#include<bits/stdc++.h>
using namespace std;
vector<long long > dp;
long long  f (vector<int> &height,int i, int k ){
	int n= height.size();
	if (i>=n) return dp[i] = 0;
	if (dp[i]!=-1) return dp[i];
	long long  cost =INT_MAX;
	for (int j=1; j<=k;j++){
		if (i+j>=n) break;
		cost = min(cost , abs (height[i+j]-height[i])+ f(height,i+j, k));
	}
	if (cost==INT_MAX) return dp[i]=0;
	return dp[i] = cost;
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
                int n,k;
                cin>>n>>k;
                vector<int> height;
                for (int i=0;i<n;i++){
                	int ele;
                	cin>>ele;
                	height.push_back( ele);
                }
                dp.clear();
                dp.resize(1e5+7, -1);
         cout<<f(height,0,k)<<endl;

    }
	return 0;  
}
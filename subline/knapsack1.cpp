#include<bits/stdc++.h>
using namespace std;
vector<pair<long long,long long>> p;
vector<long long> dp;
int n;
long long f (long long wt, int i=0){
	if (wt== 0) return dp[wt] =0;
	if (i>=n) return dp[wt]=0;
	
	if (dp[wt]!=-1) return dp[wt];
	auto ele = p[i];
 if (wt <ele.first ) return dp[wt] =f(wt, i+1);
 else {
      
      long long incl = ele.second+ f(wt-ele.first, i+1);
      long long excl = f(wt, i+1);     
      return dp[wt] = max ( incl,excl);
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
         
         long long  wt;
         cin>>n>>wt;   
         for (int i=0;i<n;i++){
         	long long w,v;
         	cin>>w>>v;
            p.push_back(make_pair(w,v));
         }
         dp.clear();
         dp.resize(1e5+7, -1);
         cout<<f(wt)<<endl;
	return 0;  
}
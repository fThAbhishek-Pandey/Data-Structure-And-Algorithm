#include<bits/stdc++.h>
using namespace std;
vector<long long> dp;
long long  f ( vector <vector<int>>& enjoy,int i,int select){
	int n= enjoy.size();
	if (i>= n) return  0;
	//if (dp[i] != -1) return  dp[i];
	long long  mx = 0;
	 for (int j=0;j<3;j++){
	 	if (j != select) 
	 	  mx = max ( mx, enjoy[i][j] + f(enjoy , i+1,j ));
	 }
	 return  mx;
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
           int n;
           cin>>n;
           vector<vector<int>> enjoy;
           for (int i=0; i<n;i++){
           		int s,b,h;
           		cin>>s>>b>>h;
           		enjoy.push_back({s,b,h});
           }
           dp.clear();
           dp.resize(1e4+7, -1);
       cout<<f(enjoy,0, -1)<<endl;
    }
	return 0;  
}
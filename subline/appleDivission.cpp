#include<bits/stdc++.h>
using namespace std;
 void f (vector<long long> &nums, int k, long long sum, long long tot, long long *ans , int n){
 	if (k == n){
          *ans = min (*ans, abs(tot - 2*sum));
           return;
 	}
 	sum += nums [k];
 	f(nums, k+1, sum , tot, ans,n);
 	sum -= nums[k];
 	f (nums,k+1, sum , tot, ans,n);
    return;
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
       vector<long long> wt;
       long long tot=0;
      for (int i=0;i<n;i++){
 		long long ele;
 		cin>>ele;
 		wt.push_back(ele); 
 		tot += ele;    
      }
      long long ans = INT_MAX;
      f (wt,0, 0,tot,&ans, n);
      cout<<ans<<endl;
	return 0;  
}
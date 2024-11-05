#include<bits/stdc++.h>
using namespace std;
int f (std::vector<int> nums, long long sum1, long long sum2,int k){
	if (k==nums.size()) return abs(sum1- sum2);
	return min(f(nums,sum1 +nums[k], sum2,k+1), f(nums, sum1,sum2+nums[k],k+1));
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
      std::vector<int> wt;
      for (int i=0; i<n;i++){
      	int ele;
      	cin>>ele;
      	wt.push_back(ele); 
      }
       cout<<f(wt,0ll,0ll,0ll)<<endl;
     
	return 0;  
}
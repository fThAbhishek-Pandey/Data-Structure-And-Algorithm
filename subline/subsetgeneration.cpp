#include<bits/stdc++.h>
using namespace std;
vector <vector<int>> f ( vector <int>& nums){
	vector <vector<int>> ans;
	int n= nums.size();
      for (int b = 0; b < (1<<n); b++) {
vector<int> subset;
for (int i = 0; i < n; i++) {
if (b&(1<<i)) subset.push_back(i);
     }
     ans.push_back(subset);
}
   return ans;
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
      std::vector<int> nums;
      for (int i=0; i<n;i++){
      	     int ele;
      	     cin>>ele;
      	     nums.push_back(ele);
      }
      vector <vector<int> > ans =  f (nums );
       for (int i=0;i<ans.size();i++){
       	     for (int j=0; j< ans[i].size();j++){
       	     	cout<<nums[ans[i][j]]<<" ";
       	     }
       	     cout<<endl;
       }
	return 0;  
}
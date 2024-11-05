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
              int n,k;
              cin>>n>>k;
              std::vector<int> a;
              for (int i=0; i<n;i++){
              	 int ele;
              	 cin>>ele;
              	 a.push_back(ele);
              }
              int count =1;
               for (int i = 1; i < n; ++i)
               {
               	   int h = abs (a[i-1]- a[i]);
               	  if (h<=k) count++;
               }
               cout<<count<<endl;
    }
	return 0;  
}
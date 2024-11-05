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
           std::vector<int> sel;
           for (int i=0;i<n;i++){
           	  int ele;
           	  cin>>ele;
           	  sel.push_back(ele);
           }
           int mini = INT_MAX;
           for (int i=0; i<n;i++){
           	   if (sel[i]>=k) mini = min (mini, sel[i]%k);
           }
           if (mini== INT_MAX) cout<<-1<<endl;
           else cout<<mini<<endl;
    }
	return 0;  
}
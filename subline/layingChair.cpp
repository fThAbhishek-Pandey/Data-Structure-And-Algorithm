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
               int n;
               cin>>n;
               std::vector<pair<char, int>> p;
               for (int i=0; i<n;i++){
               	      char ele1;
               	      cin>>ele1;
               	      int ele2;
               	      cin>>ele2;
               	      p.push_back(make_pair(ele1,ele2));
               }
               int count=0;
             for (int i=0;i<n;i++){
             	 for (int j = i+1; j < n; ++j)
             	 {
             	 	if (p[i].first=='G'&&p[j].first=='L'){
             	 		if (p[i].second >= p[j].second) count++;
             	 	}
             	 	else if (p[i].first=='L'&&p[j].first=='G'){
             	 			   if (p[i].second<= p[j].second) count++;
             	 	}
             	 }
             }  
             cout<<count<<endl;
    }
	return 0;  
}
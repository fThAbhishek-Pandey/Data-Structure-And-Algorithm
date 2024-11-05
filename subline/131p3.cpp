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
         vector<int>vec(n);
         for(int i=0;i<n;i++){
         	cin>>vec[i];
         } 
         sort( vec.begin(),vec.end());
         // reverse(vec.begin(), vec.end());
         int sum=0;
         for (int i=0;i<n;i++){
         	if (vec[i]==1 && k>0) {
         		sum += 6;
         		k--;
         	}
         	else if (vec[i]==2 && k>0) {
         		sum +=5;
         		k--;
         	}
         	else if(vec[i]==3&& k>0){
         		sum += 4;
         		k--;
         	}
         	 else sum+= vec[i];
         } 
         cout<<sum<<endl;
    }
	return 0;  
}
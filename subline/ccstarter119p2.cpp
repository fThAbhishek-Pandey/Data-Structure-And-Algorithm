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
           int count =0;
           for (int i=0;i<5;i++){
           	int ele;
           	cin>>ele;
           	count += ele;
           }
           if (count< 4) cout<<""<<endl;
           else cout<<""<<endl;
    }
	return 0;  
}
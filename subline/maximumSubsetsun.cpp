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
           vector<int> vec;
            int sum =0;

           for (int i=0; i< n; i++){
           	   int ele;
           	   cin>>ele;
           	   if (ele>0) sum += ele;
           }
           cout<<sum<<endl;
          
    }
	return 0;  
}
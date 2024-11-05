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
    // int t;
    // cin>>t;
    // while (t--){
             int n;
             cin>>n;
             vector<long long > x;
             vector <long long > y;
             for (int i=0; i<n; i++){
             	 long long  ele;
             	 cin>> ele;
             	 x.push_back(ele) ;
             }
             for (int i=0; i<n; i++){
             	 long long ele;
             	 cin>> ele;
             	 y.push_back(ele) ;
             }
             long long  mx = 0ll;
             for (int i=0; i<n;i++){

             	for(int j =i+1; j<n; j++){
                    long long  d1 =  x[i]-x[j];
                     
                        d1 *= d1;
                      long long  d2 =  y[i]-y[j];
                      d2 *=d2;
                      d2 += d1;
                      
                      mx = max (mx, d2);
             	}
             }
             cout <<mx<<endl;
   // }
	return 0;  
}
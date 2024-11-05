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
             std::vector<int> v;
             for (int i = 0; i < n; ++i)
             {
             	/* code */
             	int ele;
             	cin>>ele;
             	v.push_back(ele);

             }
                int count =0;
             for (int i=0; i<n;i++){
             	int r = v[i], a=v[i];
             	for (int j=i+1; j<n;j++){
             		 r ^= v[i];
             		 a &= v[i];
             		 if (r== a) count++;
             	}
             }
             cout<<count+n<<endl;
    }
	return 0;  
}
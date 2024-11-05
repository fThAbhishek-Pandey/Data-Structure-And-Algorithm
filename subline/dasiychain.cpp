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
            vector<int> p;
            for (int i = 0; i < n; ++i)
            {
            	int ele;
            	cin>>ele;
            	p.push_back(ele);
            }
            int count =0;
            for (int i=0; i< n;i++){
            	int cnt =0, sum = p[i];
            	for (int j=i+1;j<n; j++){
            		sum += p[j];
            		cnt++;
            		if (sum/cnt ==p[j]) count++;
            	}
            }
            cout<<count+n<< endl;
    }
	return 0;  
}
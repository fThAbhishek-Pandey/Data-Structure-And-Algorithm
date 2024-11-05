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
            int n,m;
            cin>>n>>m;
            vector<vector<int>> p;
            for (int i=0; i<n;i++){
            	vector <int> help;
            	for (int j=0;j< m;j++){
            		int ele;
            		cin>>ele;
            		help.push_back(ele);
            	}
            	p.push_back(help);
            }
            int count =0;
            for (int i=0; i< n; i++){
            	for (int j=1;j<m;j++){
            		 if (p[i][j-1]<p[i][j]) count++;
            	}
            }
            cout<<count<<endl;
    }
	return 0;  
}
#include<bits/stdc++.h>
using namespace std;
vector<bool> ready;
vector<int> value;
 vector<int> coins;
 int INF = 1e7;

int solve(int x) {
if (x < 0) return INF;
if (x == 0) return 0;
if (ready[x]) return value[x];
int best = INF;
cout<<best<<" ";
for (auto c : coins) {
best = min(best, solve(x-c)+1);
}
value[x] = best;
ready[x] = true;

return best;
}

int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	// Never Give Up,  manzil dur nhi hai
        int n,wt;
        cin>>n>>wt;
       coins.clear();
        for(int i=0; i<n;i++){
        	int ele;
        	cin>>ele;
        	coins.push_back(ele);
        }
         ready.clear();
         value.clear();
         ready.resize(1e6,false);
         value.resize(1e6, INF);
        cout<<solve(wt)<<endl;
	return 0;  
}
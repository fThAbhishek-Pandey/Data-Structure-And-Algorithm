#include<bits/stdc++.h>
using namespace std;
int f (vector<int> & cost, int i=-1){
    if (i>=cost.size()) return 0;
    int k1 =0,k2=0;
    if ((i+1)<cost.size()) {
        k1 = f(cost, i+1) + cost[i+1];
        cout<<k1<<" ";
    }
    if ((i+2 )< cost.size() ) {
            k2 = f (cost, i+2) + cost[i+2];
            cout<<k2<<" ";
    } 
    return  min (k1, k2);
}
    int minCostClimbingStairs(vector<int>& cost) {
        return  f(cost ,-1);
    }
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	//Never Give Up,  manzil dur nhi hai
    int t;
    cin>>t;
    vector<int> cost;
    while (t--){
        int ele;
        cin>>ele;
        cost.push_back(ele);   
    }
   cout<< minCostClimbingStairs(cost)<<endl;
	return 0;  
}
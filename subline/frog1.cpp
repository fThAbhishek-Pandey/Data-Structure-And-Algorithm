#include<bits/stdc++.h>
using namespace std;
vector <int> dp;
int f (vector<int>& vec,int i){
	  int n = vec.size();
      if (i >= n) return dp[i] =  0;
       if (dp[i]!=-1) return dp[i];
      int j1 = INT_MAX,j2=INT_MAX;

      if (i+1 <n) j1 = abs (vec[i+1] -vec[i]) + f (vec, i+1);
      if (i+2 <n ) j2 = abs(vec[i+2] - vec[i]) + f(vec, i+2);
      if (j1==INT_MAX&&j2==INT_MAX) return dp[i] = 0;		

      return  dp [i] =min(j1,j2);
}
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
            vector <int>vec;
            for (int i=0; i<n;i++){
            	int ele;
            	cin>>ele;
                vec.push_back(ele);
            } 
            dp.clear();
            dp.resize(1e5,-1);
            int min_cost = f (vec, 0);
            cout<<min_cost<<endl;
    }
	return 0;  
}
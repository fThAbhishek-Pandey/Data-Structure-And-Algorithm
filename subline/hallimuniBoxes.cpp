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
     
  int row,col;
  for(row=1;row<=5;row=row+1){
    for(col=1;col<=5;col=col+1){
        cout<<" * "<<" ";
    }
    cout<<endl;
  }  
       
    }
	return 0;  
}
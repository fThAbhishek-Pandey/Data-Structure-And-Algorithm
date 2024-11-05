#include<bits/stdc++.h>
using namespace std;

int f (string str, int *count ){
	int mx =0;
	
	for (int i=1;i<str.size();i++){
		 if (str[i-1] == str[i]) (*count)++;
		 else {
		 	mx = max( mx,(*count));
		 	(*count)=1;
		 }
	}
		mx = max( mx,*count);
	return mx;
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
           int n,q;
           cin>>n>>q;
           string str ;
           cin>>str;
           int count =1;
           int mx = f(str, &count);
            cout<<mx<<" ";
           std::vector<char> v;
           int k= count;
         //  cout<<count<<"* ";

           for (int i=0;i<q;i++){
           	    
           	    char ele;
           	    cin>>ele;
           	     char  last= str.back();
           	    str += ele;
           	    if (last ==ele) k++;
           	    else {
           	    	mx= max (mx, k);
           	    	k=1;
           	    }
           	    mx= max (mx, k);
           	    cout<<mx<<" ";
           }
        cout<<endl;
    }
	return 0;  
}
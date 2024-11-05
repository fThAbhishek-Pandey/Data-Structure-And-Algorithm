#include<bits/stdc++.h>
using namespace std;
string str;
vector<string> ans;
int idx[26];
void f ( const string ptr = "" ){
	  if ( ptr.size()==str.size()){
	  		ans.push_back(ptr);
	  		return;
	  }
	  for (int i=0;i< 26;i++){
	   
	  	   if (idx[i]>0) {
	  	   	idx[i]--;
	  	   	f (ptr + (char) ('a'+i));
	  	   	idx[i]++;
	  	   } 
	  }	
	  return ;
}
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	// Never Give Up,  manzil dur nhi hai
	
	cin>>str;
	for (auto ch : str) idx[ch- 'a']++;
	string ptr = "";
	f ();
    cout<<ans.size()<<endl;
    for (int i=0;i<ans.size();i++){
    	cout<<ans[i]<<endl;
    }
	return 0;  
}
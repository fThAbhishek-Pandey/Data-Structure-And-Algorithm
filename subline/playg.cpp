#include<bits/stdc++.h>
using namespace std;
 // first deserve last desire 
 /*apne ko Darna nhi , khelna hai */
 bool validPalindrome(string s) {
        unordered_map <char,int> mp;
        for (char i= 0;i<s.size();i++){
            mp[s[i]]++;
        }
        int count =0;
        for (char i= 'a';i<='z';i++){
        	cout<<i<<" --> "<<mp[i]<< " "<<count<<" --> ";
            if (mp[i]%2==1) count++;
            cout<<count<<endl;
            if (count>2) return false;
        }
        return true;
    }
int main (){
	#ifndef ONLINE_JUDGE
	// FOR GETTING input form input,text
	freopen("input.txt","r",stdin);
	// for writing output to output.txt
	freopen("output.txt","w",stdout);
	#endif 
	int t;
	cin>>t;
	while (t--){
		//enter your code
		string str;
		cin>>str;
		if (validPalindrome(str)) cout<<" yes"<<endl;
		else cout<<" no"<<endl; 
		  
		}
	return 0;
}
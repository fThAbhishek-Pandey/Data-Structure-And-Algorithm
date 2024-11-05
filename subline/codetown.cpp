#include<bits/stdc++.h>
using namespace std;
bool flag( char ch1,char ch2){
		string k= "AEIOU";
         if(k.find(ch1)!=k.end()&&k.find(ch2)!=k.end()) return true;
         if(k.find(ch1)==k.end()&&k.find(ch2)==k.end()) return true;
         return false;

}
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);// FOR GETTING input form input,text
	freopen("output.txt","w",stdout);// for writing output to output.txt
	#endif 
	// Never Give Up 
     int t;
     cin>>t;
     while (t--){
     	string str;
     	cin>>str;
     	string  dis= "CODETOWN";
     	//char k= {'A','E','I','O','U'};
         for(int i=0;i<str.size();i++){
         	 if(!flag(str[i],dis[i])) {
         	 	cout<<"no"<<endl;
         	 	break;
         	 }
         }
         cout<<"yes"<<endl;
     }
	return 0;
}
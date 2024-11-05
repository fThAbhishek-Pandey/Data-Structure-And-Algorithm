#include <iostream>
using namespace std;

int main() {
        #ifndef ONLINE_JUDGE
        // FOR GETTING input form input,text
        freopen("input.txt","r",stdin);
        // for writing output to output.txt
        freopen("output.txt","w",stdout);
        #endif 
	// your code goes her
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        string str1,str2;
        cin>>str1;
        cin>>str2;
        int a=0,b=0;
        bool flag =true;
        for (int i=0;i<n;i++){
           if (str1[i]==str2[i]){continue;}
           else if (str1[i]=='R'&&str2[i]=='S') a++;
           else if(str2[i]=='R'&&str1[i]=='S') b++;
           else if(str1[i]=='S'&&str2[i]=='P') a++;
           else if  (str2[i]=='S'&&str1[i]=='P') b++;
           else if(str1[i]=='P'&&str2[i]=='R') {
               a++;
               cout<<b<<endl;
               flag =false;
               break;
           }
           else if (str2[i]=='P'&&str1[i]=='R'){
              
               b++;
               cout<<b<<endl;
               flag =false;
               break;
           }
           
        }
        if (flag){
         if (a==b) cout<<0<<endl;
         else 
         cout<<b<<endl;
        }
    }
return 0;
}

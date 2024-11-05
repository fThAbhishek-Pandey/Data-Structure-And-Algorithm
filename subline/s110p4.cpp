#include<bits/stdc++.h>
using namespace std;

int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);// FOR GETTING input form input,text
	freopen("output.txt","w",stdout);// for writing output to output.txt
	#endif 
	// Never Give Up 
     int t;
     cin>>t;
     while (t--){
     	int i,j;
     	cin>>i>>j;
     	int a=i;
     	int b=j;
     	int k=0;
     	//cout<<" i j \n";
     	int flag2= false;
     	while (j>=1){
     		 //cout<<i<<" "<<j<<endl;
     		if (i%j==0) {
     			flag2= true;

     			break;
     		}
     		i++;
     		j--;
     		k++;
     	}
     	int h=0;
   //  cout<<"a b"<<endl;
         bool flag1= false;
     	while (a>=b){
     	 //  cout<<a<<" "<<b<<endl;
     		if(a%b==0) {
     			flag1= true;
     			break;
     		}
     		a--;
     		b++;
     		h++;
     	}
     	 if (flag1&&flag2) cout<<min(k,h)<<endl;
     	 else if (flag1) cout<<h<<endl;
     	 else if (flag2) cout<<k<<endl;
     }
	return 0;
}
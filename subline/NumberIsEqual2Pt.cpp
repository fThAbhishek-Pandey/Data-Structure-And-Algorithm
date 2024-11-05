#include<bits/stdc++.h>
using namespace std;
 // first deserve last desire 
 /*apne ko Darna nhi , khelna hai */

int main (){
	#ifndef ONLINE_JUDGE
	// FOR GETTING input form input,text
	freopen("input.txt","r",stdin);
	// for writing output to output.txt
	freopen("output.txt","w",stdout);
	#endif 
	int n,m;
	cin>>n>>m;
	int arr[n],brr[m];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	for (int i=0;i<m;i++){
		cin>>brr[i];
	}
	int count=0;
	for (int i = 0,j=0; i < n||j<m;)
	{
		if(j<m&&i<n&&arr[i]==brr[j])
		
		{
			 if (i+1<n&&arr[i]<arr[i+1]) j++;
			 else if (j+1<m&&brr[j]<brr[j+1]) i++;
			   else i++;
			count++;
			
			else {
				cout<<count<<" Abhishek ji ";
			}
		}
		else if(j<m||i<n&&arr[i]<brr[j]) i++;
		else j++;
	}
	cout<<count<<"ram"<<endl;
	return 0;
}
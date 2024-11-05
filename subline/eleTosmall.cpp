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
    for (int i = 0; i < n; ++i)
    {
    	cin>>arr[i];
    }
	for (int i = 0; i < m; ++i)
	{
		cin>>brr[i];
	}
	for(int i=0,j=0,k=0;i<n||j<m;k++){
		if (j==m||i<n&&arr[i]<brr[j]) i++;
		else brr[j++]=i;
	}
	for (int i = 0; i < m; ++i)
	{
		cout<<brr[i]<<" ";
	}
	return 0;
}
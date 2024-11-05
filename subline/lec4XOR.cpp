#include<bits/stdc++.h>
using namespace std;
void printBi (int num){
	for (int i=31;i>=0;i--){

	}
}
void swap (int & num1,int & num2){
	cout<<num1<<" ^ "<<num2<<" --> ";
	num1 = num1^num2;
	cout<<num1<<endl<<num1<<" ^ "<< num2<<" --> ";
	num2= num1^num2;
	cout<<num2<<endl<<num1<<" ^ "<< num2<<" --> ";
	num1= num1^num2;
	cout<<num1<<endl;

}
int singleNumber (vector<int> arr){
	int ans=0;
	for (auto ele : arr){
		ans ^= ele;
	}
	return ans;
}
int main () {
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);// FOR GETTING input form input,text
	freopen("output.txt","w",stdout);// for writing output to output.txt
	#endif 
	// Never Give Up 
     /*
      0 ^  0  --> 0
      0 ^  1  -->  1
      1 ^  0  -->  1
      1 ^  1  -->  0
      */
	int num1,num2;
	cin>>num1>>num2;
     swap (num1,num2);
     cout<<num1<<" "<<num2;
     cout<<"enter the length of vector : ";
     int n;
     cin>>n;
     vector<int> vec(n);
     for (int i=0;i<n;i++){
     	cin>>vec[i];
     }
     cout<<"the single number is : "<<singleNumber(vec);
	return 0;
}
#include <iostream>
#include <vector> 
using namespace std;
bool candistchoco (vector<int>,int,int);
int distchoco(vector<int> , int );
int main() {
      cout << "enter the number of boxes \n";
  int n;
  cin>>n;
  cout<<"enter the number of chocolate in each box \n";
  vector<int> choco ;
  for (int i=0; i<n; i++){
    int x ;
    cin>>x;
    choco.push_back(x);
  }
  cout<<"enter the number of students \n";
  int m;
  cin>>m;
  cout<<distchoco(choco,m)<<endl;
  return 0;
}
int distchoco (vector<int> arr, int m){
  int n = arr.size();
  int lo = arr[0];
  int hi = 0;
  for (int i = 0; i< arr.size();i++){
    hi += arr[i];
  }
  int ans = -1;
  while (lo<=hi){
    int mid = lo+ (hi-lo)/2;
    if (candistchoco(arr,mid,m)){
      ans = mid;
      hi= mid-1;       
    }
    else lo = mid+1;
  }
  return ans ;
}
bool candistchoco(vector<int> arr,int mid , int m){
  int stu_req =1;
  int n= arr.size();
  int curr_sum =0;
  for (int i = 0; i<n; i++){
    if (arr[i]>mid ) return false;
    if (curr_sum + arr[i]>mid){
      stu_req++;
      curr_sum = arr[i];     
    }
    else curr_sum += arr[i];
  }
  return true;
}
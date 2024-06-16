#include <iostream>
using namespace std ;
void rev (int arr[],int n){
    int arr2[n] ;
     for(int i=0;i<n;i++){
        arr2[i] = arr[i];
     }
     for (int i=n-1,j=0;i>=0;i--,j++){
        arr[j]= arr2[i];
     }
}
int main() {
    int n;
    cin>>n;
    int arr [n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    rev (arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}

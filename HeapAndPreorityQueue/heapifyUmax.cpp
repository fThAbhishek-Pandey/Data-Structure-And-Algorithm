#include<iostream> 
using namespace std;
int const N= 1e3;
void heapify (int arr[],int size,int curr){
    while (2*curr<=size){
        int leftchild= 2*curr;
        int rightchild= 2*curr+1;
        int midchild= rightchild;
        if (arr[rightchild]<arr[leftchild]){
            midchild= leftchild;
        }
        if (arr[curr]>arr[midchild]) return;
        swap (arr[curr],arr[midchild]);
        curr=midchild;
    }
}
int main (){
    int arr[N] ={-1,60,10,80,50,5,20,70};
    int size=7;
    for (int i=1; i<=size;i++){
        heapify(arr,size,i);
    }
    for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
    }
}
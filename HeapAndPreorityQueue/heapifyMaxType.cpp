#include<iostream>
using namespace std;
int const N= 1e3;
void heapifyMaxType(int arr[],int size,int curr){
    while (curr<=size){
        int leftchild= 2*curr;
        int rightchild=2*curr+1;
        int midchild = leftchild;
         if (rightchild<=size&&arr[rightchild]>arr[leftchild]){
            midchild= rightchild;
         }
         if (arr[midchild]<arr[curr]) return ;
        swap (arr[midchild],arr[curr]);
        curr=midchild;
         for (int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
     }cout<<endl;
}}
int main (){
     int MaxHeap[N]= {-1,60,10,80,50,5,20,70};
     /*
                60
          10           80
   50         5    20      70
  
    */
     int size=7;
     
     for (int i=size/2;i>0;i--){
         heapifyMaxType (MaxHeap,size,i);
     }
     cout<<"dost\n";
     for (int i=1;i<=size;i++){
        cout<<MaxHeap[i]<<" ";
     }
    
}
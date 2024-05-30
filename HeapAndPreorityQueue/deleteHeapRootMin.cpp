#include<iostream> 
using namespace std;
int const N= 1e3;
void deleteRoot(int minHeap[],int &size){
    minHeap [1]= minHeap[size];
    size--;
    int curr=1;
    while (curr*2<=size){
      // looping till curr node has child node 
       int leftchild = 2*curr;
       int rightchild = 2*curr+1;
       int midchild = leftchild;
       if (rightchild<=size&& minHeap [rightchild]< minHeap [leftchild]){
         midchild= rightchild; 
       }
       if ( minHeap[midchild]>= minHeap [curr]) return;
       swap( minHeap [midchild], minHeap [curr]);
       curr=  midchild;
    }
}
int main (){
     int arr[N] ={-1,5,20,10,40,50,30,60};
     int size= 7;
     deleteRoot (arr,size);
     for (int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
     }
     cout<<endl;
}
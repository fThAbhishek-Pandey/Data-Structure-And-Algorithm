#include<iostream>
using namespace std;
int const N=1e3;
void insertMaxHeap (int  MaxHeap[],int &size,int val){
    size++;
    MaxHeap[size]=val;
    int curr= size;
    while (curr>0&&MaxHeap[curr]>MaxHeap[curr/2]){
        swap(MaxHeap[curr],MaxHeap[curr/2]);
        curr/=2;
    }
}
int main(){
      int MaxHeap [N]= {1001,60,50,40,30,20,10,5};
      int size =7;
      int val=100;
      insertMaxHeap (MaxHeap,size,val);
      for (int i=1;i<=size;i++){
        cout<<MaxHeap[i]<<" ";
      }
} 
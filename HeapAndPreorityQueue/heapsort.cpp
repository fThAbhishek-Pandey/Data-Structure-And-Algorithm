#include<iostream> 
using namespace std;
void heapify (int arr[],int size,int curr){
   cout<<"ram  "<<size<<endl;
  while(curr<=size){
      int leftchild = curr*2;
      int rightchild= curr*2+1;
      int midchild= leftchild;
     
      if (rightchild<=size&&arr[leftchild]>arr[rightchild]){
        midchild= rightchild;
      }
      if (arr[curr]<arr[midchild]){
        return;
      }
      swap(arr[curr],arr[midchild]);
      curr= midchild;
}}
void remove (int arr[],int &size){
    swap(arr[1],arr[size]);
    size--;
    heapify (arr,size,1);
}
 void heapSort(int *arr,int size){
      //1. hepify the short 
      for (int i=size/2;i>0;i--){
        // i is the pointer to pararent check to that is heapify or not 
        heapify (arr,size,i);
      }
      /*
             5 
        10       20
      50   60  80   70
      */
     //  2. One by one delete the root node of the heap and replace if whith the last node int the heap heapify the root of the root.
     // repeat this process till the size of the heap is greater than 1;
     while (size>0){
        remove(arr,size);      
     }
 }
int main (){
       int arr[]= {-1,60,10,80,50,5,20,70};
       int  size =7;
       /*
              60
          10        80
      50     5   20      70 
    
        */
      // heapSort (arr,size);
       for (int i=size/2;i>0;i--){
        // i is the pointer to pararent check to that is heapify or not 
        heapify (arr,size,i);
      }
       for(int i=1;i<=size;i++){
        cout<<arr[i]<<" ";
       }cout<<endl;
       return 0;
}
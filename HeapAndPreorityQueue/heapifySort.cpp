#include<iostream> 
using namespace std;
   int const N = 1e3;
   void heapify (int arr[],int &size,int curr){
        while (2*curr<=size){
                int leftchild= 2*curr;
                int rightchild= 2*curr+1;
                int midchild= rightchild;
                if (arr[rightchild]>arr[midchild]){
                        midchild= leftchild;
                }
                if (arr[midchild]>=arr[curr]) return;
                swap (arr[midchild],arr[curr]);
                curr= midchild;
        }
   }
   void remove (int arr[],int & size ){
        swap (arr[1],arr[size]);
        size--;
        heapify (arr,size,1);
}
void heapSort(int arr[],int n){
        // 1.heapify all parent node 
        for (int i=n/2;i>0;i--){
           heapify (arr,n,i);
        }
        // 2. keep deleting element from max heap until size becomes 0
        while (n>0){
                remove(arr,n);
        }
}

int main (){
        int arr[N] ={-1,60,10,80,50,5,20,70};
        int size= 7;
        heapSort(arr,size);
        for (int i=1;i<=size;i++){
                cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
}
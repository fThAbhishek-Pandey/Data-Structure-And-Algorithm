#include<iostream> 
using namespace std;
int const N= 1e3;
void deleteMaxHeap (int MaxHeap[],int &size){
         MaxHeap[1]= MaxHeap[size];
         size--;
         int curr=1;
         while (curr*2<=size){
            // looping till cuur node has child node
            int leftchild= curr*2;
            int rightchild=curr*2+1;
            int midchild = leftchild;
            if (rightchild<=size&&MaxHeap[leftchild]<MaxHeap[rightchild]) {
                midchild= rightchild;
            }
            if (MaxHeap[midchild]>=MaxHeap [curr]) return ;
            swap(MaxHeap[midchild],MaxHeap[curr]);
            curr=midchild;
         }
}
int main (){
     int MaxHeap[N]= {-1,90,80,70,60,50,40,30};
     int size=7;
     deleteMaxHeap (MaxHeap,size);
     for (int i=1;i<=size;i++){
        cout<<MaxHeap[i]<<endl;
     }

}
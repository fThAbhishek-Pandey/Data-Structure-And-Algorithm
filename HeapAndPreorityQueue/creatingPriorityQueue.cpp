#include<iostream>
#include<queue> 
using namespace std;
int main (){
      priority_queue <int> pq;
      pq.push(10);
      pq.push(9);
      pq.push(7);
      while (!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();
      }
      return 0;
}
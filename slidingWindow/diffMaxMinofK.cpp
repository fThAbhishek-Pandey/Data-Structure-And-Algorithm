#include <iostream>
#include<vector>
#include<climits>
using namespace std ;
// Difference Between the Maximum and Minimum Average of all K-Length Continuous Subarrays
int main() {
    vector<int> vec= {3, 8, 9, 15};
    int k=2;
    int sum =0;
    int mini = INT_MAX;
    int maxi = INT_MIN;
    for(int i=0;i<vec.size();i++){
         if(i<k){
            sum += vec[i];
         }
         else {
           
            mini = min(mini,sum);
            maxi = max(maxi, sum);
            sum += vec[i];
            sum -= vec[i-k];
         }
        
    }
      mini = min(mini,sum);
      maxi = max(maxi, sum);
     cout<<"ans : "<<maxi<< " - "<<mini<<" = "<<maxi-mini<<endl;
     cout<<"avg : "<<float(maxi-mini)/k<<endl;
    return 0;
}
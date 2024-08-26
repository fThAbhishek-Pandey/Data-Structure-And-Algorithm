#include <iostream>
#include<vector>
using namespace std ;

int main() {
    // Maximum Sum Subarray of Size K
    vector<int> vec = { 3, 5, 6, 1, 7};
    int  k=2;
    //  slinding window 
    int sum =0;
    int ans =0;
    for(int i=0;i<vec.size();i++){
        if(i<2){
            sum += vec[i];
        }
        else {
            ans = max(sum,ans);
            sum -= vec[i-2];
            sum += vec[i];
        }
         
    }
     ans = max(sum,ans);
          cout<<ans<<"  thanks ";
    return 0;
}
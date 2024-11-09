/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.

 

Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
*/ 

#include <iostream>
#include<algorithm>
#include<vector>

using namespace std ;
vector<vector<int>> ans ;
void f( vector<int> &arr,vector<int> nums, int i, int tar){
        if( tar==0) {
            ans.push_back(nums);
            return;
        }
        if(i== arr.size()) return;
    for(int j=i;j< arr.size();j++){
   
    }
   if(arr[i] <= tar){
    //     we can pick
     nums.push_back(arr[i]);
     f(arr, nums, i+1, tar-arr[i]);
     nums.pop_back();
   }
   int j= i+1;
   while ( arr[j]==arr[j-1]) j++;
   f(arr, nums, i+1, tar);
   


}
int main() {
     vector<int> vec = {10,1,2,7,6,1,5};
     int tar = 8;
     sort(vec.begin(), vec.end());
     vector<int> nums;
     f(vec, nums,0, tar);
     for(int i=0; i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
             cout<<ans[i][j]<<" ";
        }
        cout<<endl;
     }
    return 0;
}
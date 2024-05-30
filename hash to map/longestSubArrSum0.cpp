#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int maxSubarr (vector <int> vec){
        unordered_map <int,int> m;
        int prefixSum=0, maxlen =0;
        for (int i=0;i<vec.size();i++){
            prefixSum += vec[i];
            if (prefixSum==0) maxlen++;
            if (m.find(prefixSum)!=m.end()){
                maxlen = max(maxlen,i-m[prefixSum]);
            }
            else m[prefixSum]=i;
        }
            return maxlen;
}
int main (){
    cout<<"enter the number of element of vector : ";
    int n;
    cin>>n;
    vector<int> vec(n);
    cout<<"enter the element of vector \n";
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    cout<<"the length of max subarray is : "<<maxSubarr (vec);

}
#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std;
struct meeting {
    int start;
    int end;
    int idx;
};
bool cmpr (meeting m1,meeting m2){
    return m1.end<m2.end;
}
void print_max_meet (vector<meeting> &arr){
    sort (arr.begin(),arr.end(),cmpr);
    cout<<arr[0].idx<<" ";
    int last = arr[0].end;
    for (int i=0;i<arr.size();i++){
        if (last<arr[i].start) {
            cout<<arr[i].idx<<" ";
            last = arr[i].end;
        }
    }
}
int main(){
     int n;
     cout<<"enter the number of meeting : ";
     cin>>n;
     vector<meeting> arr;
     int i=0;
     while (n--){
        int s,e;
        cin>>s>>e;
        i++;
        meeting m;
        m.start=s;
        m.end=e;
        m.idx= i;
        arr.push_back(m);
     } 
     print_max_meet(arr);
     return 0;

} 

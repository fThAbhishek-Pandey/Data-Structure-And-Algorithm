#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct task {
    int start;
    int end;
    int idx;
};
int cmpr (task t1,task t2){
    return t1.end<t2.end;
}
int doneTask (vector<task> activity){
     int count =0;
     sort (activity.begin(),activity.end(),cmpr);
     int last =0;
     for (int i=0;i<activity.size();i++){
            if (last<activity[i].start){
                count++;
                last =activity[i].end;
            }
     }
     return count;
}
int  main (){
    int n;
    cout<<"enter the number of activity : ";
    cin>>n;
    vector<task> activity;
    for (int i=0;i<n;i++){
        int s,e;
        cin>>s>>e;
        task t;
        t.start= s;
        t.end= e;
        t.idx= i+1;
        activity.push_back(t);
    }
   cout<<"the total number of activity done is : "<<doneTask(activity);
   return 0;
}

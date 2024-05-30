#include<iostream> 
#include<vector>
#include<queue>
#include<unordered_map>
using namespace std;
int leastInterval (vector<char> tasks,int cooldown ){
    //1. count frequency of the task 
    unordered_map <char,int> taskfreq;
    for(int ele: tasks){
        taskfreq[ele]++;
    }
    //2. insert frequency into max heap
    priority_queue<int> pq;
    for (auto ele: taskfreq){
        pq.push(ele.second);

    }
    // 3. find time until pq is empty 
    int time =0;
    while (!pq.empty()){
        // looping one time frame 
        vector<int> temp;
        for (int i=0;i<=cooldown;i++){
            if (!pq.empty()){
                int freq= pq.top();
                pq.pop();
                if (freq>1){
                    temp.push_back(freq-1);
                    // adding remaining task in temp vector 
                }
            }
            time++;
            if (pq.empty()&&temp.empty()){
                return time;
            }
        }
        for(auto ele: temp){
            pq.push(ele);//adding back remaing tasks 
        }
    }
    return time;

}
int main (){
    vector<char> tasks;//= {'A','A','A','B','B','B'};
    cout<<"enter the total number of task : ";
    int n;
    cin>>n;
    cout<<"enter the task \n";
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        tasks.push_back(ele);
    }
    int cooldown= 2;
    int leastTime = leastInterval(tasks,cooldown);
    cout<<"least number of unit of time : "<<leastTime<<endl;
    return 0;
}
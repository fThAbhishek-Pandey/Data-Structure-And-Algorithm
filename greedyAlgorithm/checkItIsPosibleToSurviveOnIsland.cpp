#include <iostream>
using namespace std ;
bool survive (int s,int m, int n){
    int k= (s-s/7)*n;
    if (k>s*m) return true;
    return false;
}
int main() {
    // I love Abhishek ji 
    cout << "NamasKar Abhishek ji !" <<endl;
    cout <<"enter the number of days you are required to survive  : ";
    int s;
    cin>>s;
    cout<<"maxiximum unit of food you can buy each day : ";
    int n;
    cin>>n;
    cout<<"unit of food required each day : ";
    int m;
    cin>>m;
    if (survive(s,m,n)) cout<<" survive "<<endl;
    else cout<<"try other things \n";
    
    return 0;
}
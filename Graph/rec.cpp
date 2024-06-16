#include <iostream>
using namespace std ;
void f (int n){
    if (n==0) return ;
    cout<<"Abhishek Pandey ";
    f(n-1);
    cout<<"Rajneesh ";
}
int main() {
    int n;
    cin>>n;
    f(n);
    return 0;
}
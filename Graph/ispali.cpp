#include <iostream>
using namespace std ;
bool ispalindrome (int n){
  // int n= 234432 ;
    int k = n;
    int m=0;
    while (n){
        int r = n%10;
        m = m*10 + r;
        n /=10;
    }
    // m is reverse of n
    // 
    return k==m;
}
int main() {
    int n;
    cin>>n;
    cout<<ispalindrome<<endl;
    if (ispalindrome(n)) cout<<"palindrome ";
     else cout<<"not palindrome ";
    return 0;
}
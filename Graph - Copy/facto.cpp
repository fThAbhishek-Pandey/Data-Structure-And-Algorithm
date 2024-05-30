#include <iostream>
using namespace std ;

int main() {
      int n;
      cin>>n;
      int k=1;
      for (int i=1;i<=n;i++){
        k*=i;
      }
      cout<<"the factorial of "<<n<<" is "<< k<<endl;
    return 0;
}
#include <iostream>
using namespace std ;

int main() {
    cout<<"enter :";
    int n;
    cin>>n;
    for (int i=1;i<=n;i++){//number of rows 
        for(int j=1;j<=n-i;j++){//no of col of #
            cout<<"# ";
        }
        for(int j=1;j<=i;j++){//no of col of *
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
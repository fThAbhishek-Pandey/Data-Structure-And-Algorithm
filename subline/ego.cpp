#include <bits/stdc++.h>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        vector<int> brr;
        brr.resize(n); // Resize the vector to size n
        
        for (int i = 0; i < n / 2; ++i) {
            brr[i] = abs(arr[i] + arr[i + n / 2]);
            brr[i + n / 2] = abs(arr[i] - arr[i + n / 2]);
        }
        
        vector<int> crr = brr;
        sort(crr.begin(), crr.end());
        
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());
        
        if (sortedArr == crr) {
            cout << -1 << endl;
        } else {
            for (int i = 0; i < n; ++i) {
                cout << brr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

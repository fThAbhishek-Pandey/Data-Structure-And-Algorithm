#include <bits/stdc++.h>
using namespace std;

vector<int> dp; // Memoization table

int solve(vector<int>& c, int target) {
    // Base cases
    if (target == 0) return 0;
    if (dp[target] != -1) return dp[target];

    int result = 1e9; // Initialize with a large value

    // Iterate through all coins
    for (int i = 0; i < c.size(); i++) {
        if (target - c[i] >= 0) {
            // Recur for smaller subproblems
            result = min(result, solve(c, target - c[i]) + 1);
        }
    }

    // Memoize the result
    return dp[target] = (result == 1e9 ? -1 : result);
}

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
    int n, target;
    cin >> n >> target;

    vector<int> c(n);
    for (int& v : c) cin >> v;

    dp.resize(target + 1, -1); // Initialize memoization table with -1

    cout << solve(c, target) << endl;

    return 0;
}

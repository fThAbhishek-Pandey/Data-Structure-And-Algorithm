#include <bits/stdc++.h>
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif 
	ios_base::sync_with_stdio(false);
    cin.tie(NULL),cout.tie(NULL);
	int n;
	cin >> n;
	vector<int> x(n), y(n);

	for (int &t : x) { cin >> t; }
	for (int &t : y) { cin >> t; }

	int max_squared = 0;                   // stores the current maximum
	for (int i = 0; i < n; i++) {          // for each first point
		for (int j = i + 1; j < n; j++) {  // and each second point
			int dx = x[i] - x[j];
			int dy = y[i] - y[j];
			int square = dx * dx + dy * dy;

			/*
			 * if the square of the distance between the two points is
			 * greater than our current maximum, then update the maximum
			 */
			max_squared = max(max_squared, square);
		}
	}

	cout << max_squared << endl;
}
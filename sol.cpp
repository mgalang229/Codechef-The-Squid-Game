#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// simply sort the sequence in non-increasing order
		// calculate the sum of all the elements except the last element (smallest)
		sort(a.rbegin(), a.rend());
		int sum = 0;
		for (int i = 0; i < n - 1; i++) {
			sum += a[i];
		}
		cout << sum << '\n';
	}
	return 0;
}
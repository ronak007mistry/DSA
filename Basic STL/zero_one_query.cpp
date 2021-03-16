#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> arr(n, 0); // Initializing a vector (size, value)

	int q;
	// queries
	cin >> q;
	while (q--) {
		int l, r; // one l and one r
		cin >> l >> r;
		arr[l]++;
		if (r + 1 < n) {
			arr[r + 1]--;

		}
	}
	// Cumulative sum

	for (int i = 1; i < n; i++) {
		arr[i] += arr[i - 1];
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
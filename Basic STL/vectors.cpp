#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> arr(1, 0); // Initializing a vector (size, value)
	// size of the vector
	cout << arr.size() << endl;

	for (int i = 1; i < 9; i++) {
		arr.push_back(i);
	}
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}
	for (int i = 1; i < 3; i++) {
		arr.pop_back();
	}
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << " ";
	}


	return 0;
}
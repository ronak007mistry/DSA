#include<iostream>
#include<maps>
#include<unordered_map>

using namespace std;

int main() {

	// key-> int, value-> float
	map<int, float> mp;
	mp[2] = 3.0;
	mp[3] = 5.5;
	mp[6] = 55.4;

	unordered_map<int, int> ump;
	ump[2] = 3;
	ump[3] = 5;
	ump[1] = 55;
	ump[8] = 9;

	if (ump.find(2) == ump.end()) {
		cout << "Not found" << endl;
	} else {
		cout << "Found" << endl;
	}

	mp.insert({2, 5.8});

// How to loop in a map

	for (auto it = mp.begin(); it != mp.end(); it++) {
		cout << it->first << " " << it->second << endl;
	}

	return 0;
}
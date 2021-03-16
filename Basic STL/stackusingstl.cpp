#include<bits/stdc++.h>

using namespace std;

int main() {

	stack<int> myStack;
	myStack.push(5);
	myStack.push(3);
	myStack.push(2);

	cout << "Number of items on stack - " << myStack.size() << "\n";

	while (!myStack.empty())
	{
		cout << "Popping - " << myStack.top() << "\n";
		myStack.pop();
	};

	cout << "Number of items on stack - " << myStack.size() << "\n";

	return 0;
}
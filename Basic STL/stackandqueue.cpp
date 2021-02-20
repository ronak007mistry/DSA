#include<iostream>
#include<stack>
#include<queue>
#include<deque>
#include<list>

using namespace std;

int main() {

	// stack

	stack<int> st;
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(7);

	// top element

	cout << st.top() << endl;

	// delete the element
	st.pop();


	// queue

	queue<int> qu;
	qu.push(1);
	qu.push(2);
	qu.push(3);
	qu.push(6);
	qu.push(9);

	// delete the element

	qu.pop();

	// front element

	cout << qu.front() << endl;

	// dequeue

	dequeue<int> dqu;

	dqu.push_back(10); // adding at last
	dqu.push_front(20); // adding at front

	dqu.pop_back(); // remove the last element
	dqu.pop_front(); // remove the front element

	// linked list

	list<int> li;

	// adding the element

	li.push_back(1);
	li.push_back(2);
	li.push_back(3);
	li.push_back(6);
	li.push_back(9);

	li.push_front(1);
	li.push_front(2);
	li.push_front(3);
	li.push_front(6);
	li.push_front(9);

	// deleting the element

	li.pop_back();
	li.pop_back();
	li.pop_back();
	li.pop_back();
	li.pop_back();

	li.pop_front();
	li.pop_front();
	li.pop_front();
	li.pop_front();
	li.pop_front();

	// head of the linked list

	cout << li.front() << endl; // access the head
	cout << li.back() << endl; // access the tail

	// reverse a linked list

	li.reverse();


	return 0;
}
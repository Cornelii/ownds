#include<iostream>
#include "ds.h"

using namespace std;


int main() {
	LinkedList<char> a;

	for (int i = 60; i < 70; i++)
	{
		a.append(i);
	}
	
	
	for (int i = 0; i < 10; i++) 
	{
		cout << a.get(i) << " ";
	}
	cout << endl;

	cout << "Stack Test" << endl;

	Stack<int> b;
	Stack<int>* c = new Stack<int>();
	for (int i = 10; i > 0; i--) {
		b.push(i);
		c->push(i);
	}

	for (int i = 0; i < 10; i++) {
		cout << b.pop() << " ";
		cout << c->pop() << " ";
	}
	cout << endl;
	delete c;

	return 0;
}
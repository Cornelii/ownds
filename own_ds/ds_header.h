#pragma once
#include "ds_common.h"

#ifndef LINKED_LIST
#define LINKED_LIST

template <typename T>
struct LinkedList {
	QNode<T>* head;
	QNode<T>* tail;
	int size;

	LinkedList();
	LinkedList(T val);
	~LinkedList();

	void append(T val);
	QNode<T>* go(T idx);
	T get(int idx);
	T remove(int idx);
	bool empty();
};

template <typename T>
struct DLinkedList {
	DNode<T>* head;
	DNode<T>* tail;

	int size;

	DLinkedList();
	DLinkedList(T val);
	~DLinkedList();

};

#endif

#ifndef STACK
#define STACK

template <typename T>
struct Stack {
	SNode<T>* top;
	int size;

	Stack();
	~Stack();

	void push(T val);
	T pop();
	T peek();
	bool empty();
};
#endif

#ifndef QUEUE
#define QUEUE

template <typename T>
struct Queue {
	QNode<T>* front;
	int size;

	Queue();
	~Queue();

	void enqueue();
	int peek();
	int dequeue();
	bool empty();
};

#endif

#ifndef HEAP
#define HEAP

#endif

#ifndef PRIORITY_QUEUE
#define PRIORTY_QUEUE

#endif


#ifndef TREE
#define TREE

#endif

#ifndef HASH
#define HASH

#endif

#ifndef SET
#define SET

#endif

#ifndef MAP
#define MAP

#endif

#ifndef TRIE
#define TRIE


#endif







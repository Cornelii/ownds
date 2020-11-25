#pragma once
#include "iostream"

// Queue Node
template <typename T>
struct QNode {
	QNode<T>* next;
	T value;

	QNode(T val);
};

template <typename T>
QNode<T>::QNode(T val) {
	value = val;
	next = nullptr;
}

// Stack Node
template <typename T>
struct SNode {
	SNode<T>* prev;
	T value;

	SNode(T val);
};

template <typename T>
SNode<T>::SNode(T val) {
	value = val;
	prev = nullptr;
}


// Double Node
template <typename T>
struct DNode {
	DNode<T>* next;
	DNode<T>* prev;
	T value;

	DNode(T val);
};

template <typename T>
DNode<T>::DNode(T val) {
	value = val;
	next = nullptr;
	prev = nullptr;
}


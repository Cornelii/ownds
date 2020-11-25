#pragma once
#include "ds_header.h"

// Stack
template <typename T>
Stack<T>::Stack() {
	top = nullptr;
	size = 0;
}

template <typename T>
Stack<T>::~Stack() {

}

template <typename T>
void Stack<T>::push(T val) {
	SNode<T>* new_node = new SNode<T>(val);
	new_node->prev = top;
	top = new_node;
	size++;
}

template <typename T>
T Stack<T>::pop() {
	if (empty())
	{

	}
	SNode<T>* temp_node;
	temp_node = top;
	top = top->prev;

	int return_value = temp_node->value;
	free(temp_node);
	size--;
	return return_value;
}

template <typename T>
T Stack<T>::peek() {
	if (empty())
	{

	}

	return top->value;
}

template <typename T>
bool Stack<T>::empty() {
	return size == 0;
}

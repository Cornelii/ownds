#pragma once
#include "ds_header.h"

// LinkedList
template <typename T>
LinkedList<T>::LinkedList() {
	head = nullptr;
	tail = head;
	size = 0;
}

template <typename T>
LinkedList<T>::LinkedList(T val) {
	head = new QNode<T>(val);
	tail = head;
	size = 1;
}

template <typename T>
LinkedList<T>::~LinkedList() {
	QNode<T>* temp_node;
	temp_node = head;
	while (temp_node != tail && temp_node != nullptr) // 확실히 하기
	{
		head = head->next;
		free(temp_node);
		temp_node = head;
	}
}

template <typename T>
void LinkedList<T>::append(T val) {
	QNode<T>* new_node = new QNode<T>(val);
	if (size == 0) {
		head = new_node;
		tail = head;
	}
	else
	{
		tail->next = new_node;
		tail = new_node;
	}
	size++;
}

template <typename T>
QNode<T>* LinkedList<T>::go(T idx) {

	if (idx > size - 1) {
		// raise error
	}
	QNode<T>* temp_node = head;
	for (int i = 0; i < idx; i++) {
		temp_node = temp_node->next;
	}

	return temp_node;
}

template <typename T>
T LinkedList<T>::get(int idx) {
	if (idx > size - 1) {
		// raise error
	}

	QNode<T>* temp_node;
	temp_node = go(idx);

	return temp_node->value;
}

template <typename T>
bool LinkedList<T>::empty() {
	return size == 0;
}

template <typename T>
T LinkedList<T>::remove(int idx) {
	if (idx > size - 1)
	{
		// raise error
	}

	QNode<T>* temp_node;
	QNode<T>* prev_node;

	prev_node = go(idx - 1);
	temp_node = prev_node->next;
	prev_node->next = temp_node->next;

	T return_value = temp_node->value;
	free(temp_node);

	return return_value;
}

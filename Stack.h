#ifndef __STACK__
#define __STACK__

#include "LinkedList.h"
#include <iostream>

using namespace std;

template<class T>
class Stack : public LinkedList<T> {
public:
	bool Delete(T &element);
};


//맨 앞의 노드를 삭제하고 element에 원래 있던 값을 넣어준다
template<class T>
bool Stack<T>::Delete(T &element) {
	// 크기가 0이라면 false 반환
	if (this->current_size == 0) return false;

	Node<T> *tmp = this->first;
	this->first = this->first->link;
	element = tmp->data;
	delete tmp;
	this->current_size--;

	return true;
}

#endif
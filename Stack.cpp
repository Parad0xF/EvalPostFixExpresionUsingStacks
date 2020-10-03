#ifndef _STACK_CPP
#define _STACK_CPP
#include "Stack.h"


template<class T>
Stack<T>::Stack() : numIntems(0) {}

template<class T>
bool Stack<T>::isEmpty() {

	return (numIntems == 0);
};

template<class T>
void Stack<T>::push(T anItem) {

	if (numIntems == MAX_ARRAY)
		return;
	else
	{
		anArray[numIntems++] = anItem;
	}
};

template<class T>
T Stack<T>::peak() {

	return anArray[numIntems - 1];
};

template<class T>
void Stack<T>::pop() {
	if (numIntems == 0)
		return;
	else
	{
		numIntems--;
	}
};

#endif // !_STACK_CPP
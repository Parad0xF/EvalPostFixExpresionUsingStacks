/** Created by Radu Enachi
*	Octomber 10 2020
*/
#ifndef _STACK_
#define _STACK_

#include "InterfaceStack.h"
// Declaring a const variable wich will hold the value of array size.
const int MAX_ARRAY = 50;

template<class T>
class Stack : public StackInterface<T>
{
private:
	//Declaring a variable numItems to keep track of a number elemenets in array.
	int numIntems =0;
	//Declaring the array using generic value.
	T anArray[MAX_ARRAY];
public:

	//Constructor
	Stack();

	//Function that checks wheather the stack is empty or not.
	bool isEmpty();

	//Function that pushes the intems onto the stack
	void push(T anItem);

	//Function that gets a copy of the top of the stack.
	T peak();

	//Function that delets the intem from top of the stack.
	void pop();
};
#include "Stack.cpp"
#endif // !_STACK_



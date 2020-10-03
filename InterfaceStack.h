#ifndef  _STACK_INTERFACE
#define  _STACK_INTERFACE
#include <iostream>
#include <string>

using namespace std;

template<class T>
class StackInterface {
public:
	//Pure virtual function declaration isEmpty.
	virtual bool isEmpty() = 0;
	//Pure virtual function declaration push.
	virtual void push(T anItem)  = 0;
	//Pure virtual function declaration peek.
	virtual T peak() = 0;
	//Pure virtual function declaration pop.
	virtual void pop()  = 0;
};
#endif // !_STACK_INTERFACE


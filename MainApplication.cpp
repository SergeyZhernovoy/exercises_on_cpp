#include <iostream>
#include "Stack.h"

int main()
{

	std::cout << "work with stack int  " << std::endl << std::endl;
	Stack<int> stack;

	stack.push(1);
	std::cout << "push to stack = " << 1 << std::endl;
	stack.push(0);
	std::cout << "push to stack = " << 0 << std::endl;
	stack.push(9);
	std::cout << "push to stack = " << 9 << std::endl;
	stack.push(8);
	std::cout << "push to stack = " << 8 << std::endl;
	stack.push(7);
	std::cout << "push to stack = " << 7 << std::endl;
	stack.push(6);
	std::cout << "push to stack = " << 6 << std::endl;
	stack.push(5);
	std::cout << "push to stack = " << 5 << std::endl;
	stack.push(4);
	std::cout << "push to stack = " << 4 << std::endl;
	stack.push(3);
	std::cout << "push to stack = " << 3 << std::endl;
	stack.push(2);
	std::cout << "push to stack = " << 2 << std::endl << std::endl;
	std::cout << "current  stack size = " << stack.size() << std::endl << std::endl;
	stack.push(1);
	std::cout << "push to stack = " << 1 << std::endl;
	stack.push(7);
	std::cout << "push to stack = " << 7 << std::endl;
	stack.push(6);
	std::cout << "push to stack = " << 6 << std::endl;
	stack.push(4);
	std::cout << "push to stack = " << 4 << std::endl;
	stack.push(3);
	std::cout << "push to stack = " << 3 << std::endl;
	stack.push(2);
	std::cout << "push to stack = " << 2 << std::endl << std::endl;
	std::cout << "current  stack size = " << stack.size() << std::endl << std::endl;

	stack.push(1);
	std::cout << "push to stack = " << 1 << std::endl;
	stack.push(4);
	std::cout << "push to stack = " << 4 << std::endl;
	stack.push(2);
	std::cout << "push to stack = " << 2 << std::endl;
	stack.push(1);
	std::cout << "push to stack = " << 1 << std::endl;
	stack.push(5);
	std::cout << "push to stack = " << 5 << std::endl << std::endl;

	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl;
	std::cout << "pop from stack = " << stack.pop() << std::endl << std::endl;

	std::cout << "work with stack float  " << std::endl << std::endl;
	//
	std::cout << "push to stack2 = " << 1 << std::endl;
	Stack<float> stack2;

	stack2.push(1.0f);
	std::cout << "push to stack2 = " << 1 << std::endl;
	stack2.push(0.0f);
	std::cout << "push to stack2 = " << 0 << std::endl;
	stack2.push(9.0f);
	std::cout << "push to stack2 = " << 9 << std::endl;
	stack2.push(8.0f);
	std::cout << "push to stack2 = " << 8 << std::endl;
	stack2.push(1.0f);
	std::cout << "push to stack2 = " << 1 << std::endl;
	stack2.push(4.0f);
	std::cout << "push to stack2 = " << 4 << std::endl;
	stack2.push(3.0f);
	std::cout << "push to stack2 = " << 3 << std::endl;
	stack2.push(2.0f);
	std::cout << "push to stack2 = " << 2 << std::endl;
	stack2.push(1.0f);
	std::cout << "push to stack2 = " << 1 << std::endl;
	stack2.push(5.0f);
	std::cout << "push to stack2 = " << 5 << std::endl << std::endl;

	std::cout << "pop from stack2 = " << stack2.pop() << std::endl;
	std::cout << "pop from stack2 = " << stack2.pop() << std::endl;
	std::cout << "pop from stack2 = " << stack2.pop() << std::endl;
	std::cout << "pop from stack2 = " << stack2.pop() << std::endl;
	std::cout << "pop from stack2 = " << stack2.pop() << std::endl;
	std::cout << "pop from stack2 = " << stack2.pop() << std::endl;
	std::cout << "pop from stack2 = " << stack2.pop() << std::endl;
	std::cout << "pop from stack2 = " << stack2.pop() << std::endl;

	return 0;
}

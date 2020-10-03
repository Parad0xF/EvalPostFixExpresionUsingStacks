#include "Stack.h"


int compute(int a, int b, char opt) {
	int i = 0;
	switch (opt)
	{

	case '+':
		i = a + b;
		break;
	case '-':
		i = a - b;
		break;
	case '*':
		i = a * b;
		break;
	case '/':
		i = a / b;
		break;
	case '%':
		i = a % b;
		break;
	case '^':
		i = a ^ b;
		break;
	default:
		i = 0;
	}
	return i;


}
int convertToInt(char a) {

	return stoi(&a);
}

int evaluatePostfix(string string) {
	
	Stack<char> a;
	int result =0;

	for (int i =0 ; i <string.size(); i++) {
		//Check if the element string[i] is digit.
		if (string[i] >= '0' && string[i] <= '9') {

			a.push(convertToInt(string[i]));
		}
		else
		{
			//Evaluate and push the results
			int operand2 = a.peak();
			a.pop();

			int operand1 = a.peak();
			a.pop();

			result = compute(operand1, operand2, string[i]);
			a.push(result);
		}
	}

	return result;
}
int main() {

	string ch = "234+*";
	int result = evaluatePostfix(ch);

	cout << result << endl;
	return 0;
}
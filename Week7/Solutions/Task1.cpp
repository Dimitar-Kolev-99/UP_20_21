#include <iostream>

static int calculator(int firstNumber, int secondNumber, char operation) {
	int answer;
	switch (operation)
	{
	case '+':
		answer = firstNumber + secondNumber;
		break;
	case '-':
		answer = firstNumber - secondNumber;
		break;
	case '*':
		answer = firstNumber * secondNumber;
		break;
	case '/':
		answer = firstNumber / secondNumber;
		break;
	case '%':
		answer = firstNumber % secondNumber;
		break;
	default:
		return -1;
	}
	return answer;
}

#include <iostream>

int getInteger()
{
	
	std::cout << "Enter an integer: ";
	int input;
	std::cin >> input;

	return input;

}

char getOperator()
{
	
	std::cout << "Enter an operator: ";
	char inputO;
	std::cin >> inputO;
	
	while (inputO != '*' && inputO != '+' && inputO != '-' && inputO != '/')
	{
		std::cout << "Invalid operator, Enter another operator: ";
		std::cin >> inputO;
	}
	

	return inputO;
}

int getResult(int input1, char operator1, int input2)
{
	int result;

	if (operator1 == '*') {
		result = input1 * input2;
	}
	else if (operator1 == '+') {
		result = input1 + input2;
	}
	else if (operator1 == '-') {
		result = input1 - input2;
	}
	else
	{
		result = input1 / input2;
	}

	std::cout << '\n' << input1 << " " << operator1 << " " << input2 << " = " << result;

	return result;
}

char getAnotherOperator()
{
	std::cout << "\n\nDo you want to continue? \ny=yes n=no: ";
	char input;
	std::cin >> input;
	
	while (input != 'y' && input != 'n')
	{
		std::cout << "Enter either y(yes) or n(no): ";
	}
	
	if (input == 'y')
	{
		char operator2 (getOperator());
		return operator2;
		
	}
	else
	{
		return 0;
	}
}

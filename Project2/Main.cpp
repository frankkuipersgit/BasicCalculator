#include <iostream>
#include "Header.h"




int main()
{
	int			num1			(getInteger());
	char		operator1		(getOperator());
	int			num2			(getInteger());
	int			result1			(getResult(num1, operator1, num2));
	char		operator2		(getAnotherOperator());
	int			num3			(getInteger());
	int			result2			(getResult(result1, operator2, num3));
	
}





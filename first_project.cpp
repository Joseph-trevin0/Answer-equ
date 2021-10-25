/*Name:Joseph Trevino
Lab: Chapter 4
Description: My code is supposed to read a equation that is input into it then it is supposed to give the the equation back and answer it  */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const string ASSIGN_OP = "=";
	char charOp;
	const char SPACE = ' ';
	double num1, num2, answer;
	
	cout << "input an equation (Ex. 5*5 or 10+4 )" << endl;
		cin >> num1 >> charOp >> num2;

		switch (charOp)
		{
		case '+': answer = num1 + num2; // addtion equation
			cout << num1 << "+" << num2 << "=" << answer << endl;
			break;
		case '-': answer = num1 - num2;// subtraction equation
			cout << num1 << "-" << num2 << "=" << answer << endl;
			break;
		case '*': answer = num1 * num2;// multiplication equation

			cout << num1 << "*" << num2 << "=" << answer << endl;
			break;
		case '/': // division equasion 
			if (num2 == 0) // can not divide by zero
				cout << "ERROR" << num1 << "/" << num2 << "==>CANNOT DIVIDE BY ZERO" << endl;
			else
			{
				answer = num1 / num2;
				cout << num1 << "/" << num2 << "=" << answer << endl;
				// this is the division operation when they dont enter zero
			}
			break;
		case '%':
			if (num2 == 0) // this is too check if it is zero not assigening it a value
				cout << "ERROR" << num1 << "%" << num2 << "==>CANNOT ..." << endl;
			else
			{
				answer = (int)num1 % (int)num2;
				cout << num1 << "%" << num2 << "=" << answer << endl;
				// This is the modules operation
			}
			break;



		default: cout << "Error it seems you input a incorect number or character." << endl;
			// displays this when they type in something wrong
		}
	system("pause");	
}

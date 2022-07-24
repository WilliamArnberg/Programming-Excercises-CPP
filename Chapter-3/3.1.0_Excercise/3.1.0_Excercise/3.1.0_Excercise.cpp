#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std:: endl;

int main() {

	int num1 = 0;
	int num2 = 0;
	int sum = 0;
	
	string operation = "";
	
	cout << "Enter an operator for 'plus', 'minus' , 'multiply' or 'division'" << endl;
	cin >> operation;
	cout << "Enter two number of which you would lite to perform " << operation << endl;
	cin >> num1 >> num2;


	if (operation == "+")
	{
		
		sum = num1 + num2;
		cout << sum << endl;

	}
	else if (operation == "-") 
	{

		sum = num1 - num2;
		cout << sum << endl;

	}
	else if (operation == "*") 
	{

		sum = num1 * num2;
		cout << sum << endl;

	}
	else if (operation == "/") 
	{

		sum = num1 / num2;
		cout << sum << endl;

	}
	else 
	{
		cout << "Couldn't recognize operator" << endl;
	}

}
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
	
	int pennies = 0;
	int nickels = 0;
	int dimes = 0;
	int quarters = 0;
	int halfDollar = 0;
	int dollar = 0;

	cout << "How many pennies do you have?" << endl;
	cin >> pennies;
	
	cout << "How many nickels do you have?" << endl;
	cin >> nickels;
	
	cout << "How many dimes do you have?" << endl;
	cin >> dimes;

	cout << "How many quarters do you have?" << endl;
	cin >> quarters;
	
	cout << "How many half-dollar coins do you have?" << endl;
	cin >> halfDollar;
	
	cout << "How many one-dollar bills do you have?" << endl;
	cin >> dollar;

	int nickelToCent = nickels * 5;
	int dimesToCent = dimes * 10;
	int quartersToCent = quarters * 25;
	int halfDollarToCent = halfDollar * 50;
	int dollarToCent = dollar * 100;
	int centSum = nickelToCent + dimesToCent + quartersToCent + halfDollarToCent + dollarToCent;
	double dollarSum = centSum / 100;
	
	if (pennies == 1) 
	{
		cout << "You have " << pennies << " penny." << endl;
	}
	else if(pennies == 0 || pennies >= 2) 
	{
		cout << "You have " << pennies << " pennies." << endl;
	}

	if (nickels == 1)
	{
		cout << "You have " << nickels << " nickel." << endl;
	}
	else if (nickels == 0 || nickels >= 2)
	{
		cout << "You have " << nickels << " nickels." << endl;
	}

	if (dimes == 1)
	{
		cout << "You have " << dimes << " dime." << endl;
	}
	else if (dimes == 0 || dimes >= 2)
	{
		cout << "You have " << dimes << " dimes." << endl;
	}

	if (quarters == 1)
	{
		cout << "You have " << quarters << " quarter." << endl;
	}
	else if (quarters == 0 || quarters >= 2)
	{
		cout << "You have " << quarters << " quarters." << endl;
	}
	if (halfDollar == 1)
	{
		cout << "You have " << halfDollar << " half dollar." << endl;
	}
	else if (halfDollar == 0 || halfDollar >= 2)
	{
		cout << "You have " << halfDollar << " half dollars." << endl;
	}

	if (dollar == 1)
	{
		cout << "You have " << dollar << " dollar." << endl;
	}
	else if (dollar == 0 || dollar >= 2)
	{
		cout << "You have " << dollar << " dollars." << endl;
	}

	cout << "The value of all your coins is " << centSum << " cents." << endl;
	cout << "That's a total of $" << dollarSum << ".";
}
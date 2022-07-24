#include <iostream>

using namespace std;

int main() {

	string number = "";
	string zero = "zero";
	string one = "one";
	string two = "two";
	string three = "three";
	string four = "four";

	cout << "Type a number using letter" << endl;


	cin >> number;

	if (number == zero) {
		zero = "0";
		cout << zero;
	}

	if (number == one) {
		one = "1";
		cout << one;
	}
	
	if (number == two) {
		two = "2";
		cout << two;
	}

	if (number == three) {
		three = "3";
		cout << three;
	}
	if (number == four) {
		four = "4";
		cout << four;
	}
	else if(number != zero){
		cout << "Number not recognized" << endl;
	}

	
}
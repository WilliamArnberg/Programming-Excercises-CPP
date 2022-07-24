#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int val1 = 0;
	int val2 = 0;
	int val3 = 0;
	
	int largest = 0;
	int middle = 0;
	int smallest = 0;
	cout << "Enter 3 number\n";
	cin >> val1 >> val2 >> val3;

	if (val1 >= val2 && val1 >= val3) {
		val1 = largest;

	}
	else if (val2 >= val1 && val2 >= val3) {
		val2 = largest;

	}
	else if (val3 >= val1 && val3 >= val2) {
		val3 = largest;
	}



	if (val1 <= val2 && val3) {
		val1 = smallest;
	}
	else if (val2 <= val1 && val3) {
		val2 = smallest;

	}
	else if (val3 <= val1 && val2) {
		val3 = smallest;
	}



	cout << largest << " " << middle << " " << smallest;
}
#include <string>
#include <math.h>
#include <iostream>
#include <cinttypes>
using namespace std;

int main() {
	
	double val1 = 0;
	double val2 = 0;

	cout << "Please enter a number\n";
	cin >> val1;
	cout << "Please enter another number\n";
	cin >> val2;
	
	double smaller;
	double larger;

	if (val1 < val2) {
		smaller = val1;
		larger = val2;
	}
	else if (val1 > val2) {
		smaller = val2;
		larger = val1;

	}
	
	double sum = val1 + val2;
	double difference = val1 - val2;
	double product = val1 * val2;
	double ratio = val1 / val2;
	cout << "The sum of the values are: " << sum << "\n";
	cout << "The difference between the values are: " << difference << "\n";
	cout << "The product of the values are: " << product << "\n";
	cout << "The ratio of the products are: " << ratio << "\n";
	cout << "The smallest number is: " << smaller << "\n";
	cout << "The largest number is: " << larger << "\n";

}
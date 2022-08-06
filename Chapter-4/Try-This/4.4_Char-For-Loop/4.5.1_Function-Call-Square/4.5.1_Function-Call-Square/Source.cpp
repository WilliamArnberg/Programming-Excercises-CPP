#include <iostream>

using std::cout;
using std::cin;

double a = 0;
double b = 0;

int square(int a) {

	return(a * a);
}


int main() {

	cin >> a;
	cout << square(a);
}


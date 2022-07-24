#include "std_lib_facilities.h"

int main() {
	double miles;
	double kilometers;
	
	while (true) {
		try {
			cout << "Input the amount of miles you would like to convert to kilometers\n";
			cin >> miles;
			kilometers = miles * 1.609;
			cout << miles << " miles converts to " << kilometers << " kilometers\n";
		}
		catch (exception e) {
			cout << "Something went wrong";
		}
	}

}
#include <iostream>

using std::cout;
using std::string;
using std::endl;
using std::cin;
int main() {

	string wordOne;
	string wordTwo;
	string wordThree;

	string largest;
	string medium;
	string smallest;


	cout << "Enter 3 strings" << endl;
	cin >> wordOne >> wordTwo >> wordThree;
	//Check which word is the largest, medium, smallest round 1
	if (wordOne.length() >= wordTwo.length() && wordOne.length() >= wordThree.length()){
		largest = wordOne;
		if (wordTwo.length() >= wordThree.length() && wordTwo.length() <= wordThree.length()) {
			medium = wordTwo;
			smallest = wordThree; 
		}
		else {
			medium = wordThree;
			smallest = wordTwo;
		}
	}

	//Check which word is the largest, medium, smallest round 2
	if (wordTwo.length() >= wordThree.length() && wordTwo.length() >= wordOne.length()) {
		largest = wordTwo;
		
		if (wordThree.length() >= wordOne.length() && wordThree.length() <= wordTwo.length()) {
			medium = wordThree;
			smallest = wordOne;
		}
		else {
			medium = wordOne;
			smallest = wordThree;
		}
	}

	//Check which word is the largest, medium, smallest round 3
	if (wordThree.length() >= wordOne.length() && wordThree.length() >= wordTwo.length()) {
		largest = wordThree;
		if (wordOne.length() >= wordTwo.length() && wordOne.length() <= wordThree.length()) {
			medium = wordOne;
			smallest = wordTwo;
		}
		else {
			medium = wordThree;
			smallest = wordOne;
		}
	}
	

	cout << largest << " " << medium << " " << smallest << endl;


}	


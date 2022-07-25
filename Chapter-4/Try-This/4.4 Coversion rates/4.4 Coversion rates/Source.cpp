#include <iostream>
#include <string>
#include <limits>


using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::numeric_limits;
using std::streamsize;

 
int main() {
	
	double balance = 0;
	double sumDollar = 0;
	
	char currency = '0';

	char eur = 'E';
	char jpy = 'J';
	char sek = 'S';
	char gbp = 'G';

	const double euroToUsd = 1.023755;
	const double jpyToUsd = 0.0073176885;
	const double sekToUsd = 0.098441381;
	const double gbpToUsd = 1.2068018;

	cout << "What currency are you holding?" << endl << "Please input a character and finish with 'Enter':" << endl;
	cout << "'E' for Euro" << endl << "'J' for Japanese Yen " << endl << "'S' for Swedish Krona " << endl << "'G' for British Pound" << endl;
	cin >> currency;

	if (currency == eur) {
		
		cout << "You chose wallet with Euro's" << endl;
		cout << "How many euro's are you holding?" << endl;
		cin >> balance;

		while (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(),'\n');
			cout << "Bad entry, Enter a number" << endl;
			cin >> balance;			
		}

		sumDollar = balance * euroToUsd;

		cout << "Your wallet contains $" << sumDollar << "." << endl;
		cout << "Conversion was made using €" << balance << ".\n Conversion rate: " << euroToUsd;
	}

	if (currency == jpy) {

		cout << "You chose wallet with Japanese Yen" << endl;
		cout << "How many yen are you holding?" << endl;
		cin >> balance;

		while (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Bad entry, Enter a number" << endl;
			cin >> balance;
		}

		sumDollar = balance * jpyToUsd;

		cout << "Your wallet contains $" << sumDollar << "." << endl;
		cout << "Conversion was made using ¥" << balance << ".\n Conversion rate: " << jpyToUsd;
	}
	
	if (currency == sek) {

		cout << "You chose wallet with Swedish Krona" << endl;
		cout << "How many Swedish krona are you holding?" << endl;
		cin >> balance;

		while (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Bad entry, Enter a number" << endl;
			cin >> balance;
		}

		sumDollar = balance * sekToUsd;

		cout << "Your wallet contains $" << sumDollar << "." << endl;
		cout << "Conversion was made using " << balance << "kr.\n Conversion rate: " << sekToUsd;
	}

	if (currency == gbp) {

		cout << "You chose wallet with British Pound." << endl;
		cout << "How many Pound are you holding?" << endl;
		cin >> balance;

		while (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Bad entry, Enter a number" << endl;
			cin >> balance;
		}

		sumDollar = balance * gbpToUsd;

		cout << "Your wallet contains $" << sumDollar << "." << endl;
		cout << "Conversion was made using £" << balance << ".\n Conversion rate: " << gbpToUsd;
	}
	
	
	


	
}
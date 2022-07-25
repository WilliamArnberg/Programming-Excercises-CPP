#include <iostream>
#include <string>

using std::cout;
using std::endl;

int main() {
	char a = 65;
	
	for (int i = 65; i <= 90; i++)
	{
		int j = 0;
		int aValue = a;
		cout << char(a+j) << "\t" << aValue << endl;
		j++;
		a = a + j;
	}

}
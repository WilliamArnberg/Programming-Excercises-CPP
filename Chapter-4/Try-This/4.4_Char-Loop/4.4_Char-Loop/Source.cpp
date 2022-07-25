#include <iostream> 


using std::cout;
using std::endl;

int main() {
	
	
	int i = 97; //value of 'a'
	int j = 1;
	const int end = 122; //value of 'z'
	const char a = 96;

	while (i <= end) {
		cout << char(a + j) << "\t" << i << endl;
		i++;
		j++;
	}
}


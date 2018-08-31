#include <iostream>
using namespace std;

int main() {
	try {
		int motherAge = 29;
		int sonAge = 36;
		if (motherAge < sonAge) {
			throw 99;
		}
	}
	catch(int x) {
		cout << "Wrong age values - Error " << x << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;

template <class T>

T sum(T a, T b) {
	return a + b;
}

int main() {
	int x1 = 7, y1 = 15;
	cout << sum(x1, y1) << endl;
	double x2 = 7.15, y2 = 15.54;
	cout << sum(x2, y2) << endl;
	return 0;
}
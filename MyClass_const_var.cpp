#include "MyClass_const_var.h"
#include <iostream>
using namespace std;

MyClass::MyClass(int a, int b)
:regVar(a), constVar(b) {
	cout << regVar << endl;
	cout << constVar << endl;
}

int main() {
	MyClass obj(42, 33);
}
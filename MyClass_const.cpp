#include "MyClass_const.h"
#include <iostream>
using namespace std;

MyClass::MyClass() {

}

void MyClass::myPrint() const {
	cout << "Hello" << endl;
}

int main() {
	const MyClass obj;
	obj.myPrint();
}
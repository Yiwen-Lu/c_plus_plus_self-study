#include <iostream>
#include <string>
#include "MyClass_Birthday.h"
#include "MyClass_Person.h"

Birthday::Birthday(int m, int d, int y)
:month(m), day(d), year(y) {
}

void Birthday::printDate() {
	cout << month << "/" << day << "/" << year << endl;
}

Person::Person(string n, Birthday b)
:name(n), bd(b) {
}

void Person::printInfo() {
		cout << name << endl;
		bd.printDate();
}


int main() {
	Birthday bd(2, 21, 1985);
	Person p("David", bd);
	p.printInfo();
}
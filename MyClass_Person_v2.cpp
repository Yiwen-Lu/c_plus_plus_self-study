#include <iostream>
#include <string>
using namespace std;

class Birthday {
public:
	Birthday(int m, int d, int y);
	void printDate();
private:
	int month;
	int day;
	int year;
};

Birthday::Birthday(int m, int d, int y)
:month(m), day(d), year(y) {
}

void Birthday::printDate() {
	cout << month << "/" << day << "/" << year << endl;
}

class Person {
public:
	Person(string n, Birthday b);
	void printInfo();
private:
	string name;
	Birthday bd;
};

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
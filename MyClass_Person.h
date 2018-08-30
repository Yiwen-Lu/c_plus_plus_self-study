#ifndef MYCLASS_PERSON_H
#define MYCLASS_PERSON_H
#include <string>
#include "MyClass_Birthday.h"

using namespace std;

class Person {
public:
	Person(string n, Birthday b);
	void printInfo();
private:
	string name;
	Birthday bd;
};

#endif // MYCLASS_PERSON_H
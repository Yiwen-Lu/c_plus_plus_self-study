#ifndef MYCLASS_BIRTHDAY_H
#define MYCLASS_BIRTHDAY_H

class Birthday {
public:
	Birthday(int m, int d, int y);
	void printDate();
private:
	int month;
	int day;
	int year;
};

#endif // MYCLASS_BIRTHDAY_H
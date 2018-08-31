#include <iostream>
using namespace std;

class Enemy {
public:
	virtual void attack() = 0;
};

class Ninja: public Enemy {
	void attack() {
		cout << "Ninja!" << endl;
	}
};

class Monster: public Enemy {
	void attack() {
		cout << "Monster!" << endl;
	}
};

int main() {
	// Enemy e; Error here! 
	// cannot create objects of the base class with a pure virtual function
	// i.e. abstract base class
	Ninja n;
	Monster m;

	Enemy *e1 = &n;
	Enemy *e2 = &m;

	e1->attack();
	e2->attack();

	return 0;
}
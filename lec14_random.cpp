#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	int eingabe;
	std::cout << "Gebe eine Zahl ein: " << std::endl;
	std::cin >> eingabe;

	srand (time(NULL)); // set random seed
	int rand_num = rand() % 100; // set the range
	std::cout << "Die Zufallszahl ist: " << rand_num << std::endl;

	return 0;
}

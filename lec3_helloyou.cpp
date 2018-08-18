#include <iostream>
#include <string>

int main() {
	std::cout << "Bitte gebe deine Namen ein:" << std::endl;

	std::string eingabe;
	std::cin >> eingabe;

	std::cout << "Hallo " << eingabe << std::endl;

	return 0;
}
#include <iostream>

int main() {
	int a, b;

	std::cout << "Gebe eine Zahl ein: ";
	std::cin >> a;

	std::cout << "Gebe noch eine Zahle ein: ";
	std::cin >> b;

	if (a == b) {
		std::cerr << "Die zwei Zahlen sind gleich." << std::endl;
	} else {
		std::cout << "Die zwei Zahlen sind nicht gleich!" << std::endl;
	}
	
	return 0;
}

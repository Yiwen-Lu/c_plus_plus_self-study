#include <iostream>

int main() {
	int a, b;

	std::cout << "Gebe eine Zahl ein: ";
	std::cin >> a;

	std::cout << "Gebe noch eine Zahle ein: ";
	std::cin >> b;

	if (b == 0) {
		std::cerr << "Die zweite Zahl darf nicht 0 sein!" << std::endl;
	} else {
		std::cout << "Ihr Quotient ist " << a / b << std::endl;
	}
	
	return 0;
}
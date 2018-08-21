#include <iostream>

int main() {
	int n;
	std::cout << "Gebe eine (postive) Zahl ein: " << std::endl;
	std::cin >> n;

	if (n <= 0) {
		std::cerr << "Die Zahl soll postiv sein!" << std::endl;
		return 1;
	} else if (n == 1) {
		std::cout << n << " ist keine Primzahl." << std::endl;
		return 0;
	} else {
		int i = 2;
		while (i < n) {
			if (n % i == 0) {
				std::cout << n << " ist keine Primzahl." << std::endl;
				return 0;
			}
			i = i + 1;
		}
		std::cout << n << " ist eine Primzahl." << std::endl;
		return 0;
	}
}

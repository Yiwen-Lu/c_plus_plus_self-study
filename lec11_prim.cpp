#include <iostream>

int main() {
	int n;
	std::cout << "Gebe eine (postive) Zahl ein: " << std::endl;
	std::cin >> n;

	if (n <= 0) {
		std::cerr << "Die Zahl soll postiv sein!" << std::endl;

		// std::cout - Regular output (console output)
		// std::cerr - Error output (console error)
		// std::clog - Nobody cares (console log)

		// Ref: http://www.cplusplus.com/forum/beginner/72020/
		return 1;
	}

	int i = 2;
	while (i < n) {
		if (n % i == 0) {
			std::cout << n << " ist keine Primzahl." << std::endl;
			return 0;
		}

		i = i +1;
	}

	std::cout << n << " ist eine Primzahl." << std::endl;
	return 0;
}
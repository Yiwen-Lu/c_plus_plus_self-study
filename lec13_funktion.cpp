#include <iostream>

int collatz(int x) {
	int erg;

	if (x % 2 == 0) {
		erg = x / 2;		
	} else {
		erg = 3 * x + 1;
	}
	return erg;
}

int main() {
	int eingabe;

	std::cout << "Mit welcher Zahl möchtest du starten? ";
	std::cin >> eingabe;

	int x1 = collatz(eingabe);
	int x2 = collatz(x1);
	int x3 = collatz(x2);

	std::cout << eingabe << "->" << x1 << "->" << x2 << "->" 
		<< x3 << std::endl;

	return 0;
}
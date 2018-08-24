#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	// Ref: http://www.cplusplus.com/reference/cstdlib/rand/
	int true_num, guess_num;
	srand (time(NULL)); // set random seed
	true_num = rand() % 6 + 1; // set the range

	do {
		std::cout << "Please guess the dice number (1 to 6): " << std::endl;
		std::cin >> guess_num;
		if (guess_num > true_num) {
			std::cout << "The number is lower." << std::endl;
		} else if (guess_num > true_num) {
			std::cout << "The number is higher." << std::endl;
		}
	} while (guess_num != true_num);

	std::cout << "Bingo! The dice number is " << true_num << std::endl;

	return 0;
}

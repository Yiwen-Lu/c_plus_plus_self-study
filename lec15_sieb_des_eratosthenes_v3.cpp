#include <iostream>
#include <queue>  // Version 3 using queue instead of vector
#include <string>
#include <sstream>
#include <iterator>
#include <cmath>

int main() {
	// generate an integer list:
	std::cout << "Please input a nature number: " << std::endl;
	int max_n;
	std::cin >> max_n;
	// check the input:
	// Ref: https://stackoverflow.com/questions/18728754/checking-input-value-is-an-integer
    while(std::cin.fail() || max_n < 2) {
        std::cout << "Invalid number, please try again: " << std::endl;
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cin >> max_n;
    }

 	std::queue<int> to_check;
	for (int n=2; n<=max_n; n++) to_check.push(n);

	int p = 0;
	int k = 0;
	std::queue<int> prime;
	while (std::pow(p, 2) < to_check.back()) {
		p = to_check.front();
		//std::cout << "p = " << p << std::endl;
		to_check.pop();
		prime.push(p);

		std::queue<int> pending;
		while (!to_check.empty()) {
			if (to_check.front() % p == 0) {
				//std::cout << "to_check.front() = " << to_check.front() << std::endl;
				to_check.pop();
			} else {
				pending.push(to_check.front());
				to_check.pop();
			}
		}	
		to_check = pending;
		//std::cout << "pending: ";
		//while (!pending.empty()) {
		//	std::cout << ' ' << pending.front();
		//	pending.pop();
		//}
		//std::cout << std::endl;
	}

	std::cout << "All the prime numbers:";
	while (!prime.empty()) {
		std::cout << ' ' << prime.front();
		prime.pop();
	}
	while (!to_check.empty()) {
		std::cout << ' ' << to_check.front();
		to_check.pop();
	}
	std::cout << std::endl;

	return 0;
}
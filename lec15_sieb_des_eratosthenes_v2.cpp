#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include <cmath>

int main() {
	std::cout << "Please input an integer: " << std::endl;
	std::string num;
	getline (std::cin, num);
	int max_n;
	std::stringstream(num) >> max_n;

	std::vector<int> v_prime;
	for (int n=2; n<=max_n; n++) v_prime.push_back(n);

	int p = 0;
	int k = 0;
	// difference to v1:
	do {
		p = v_prime[k];
		int i = k + 1;
		while (i < v_prime.size()) {
			if (v_prime[i] % p == 0) {
				v_prime.erase(v_prime.begin() + i);
			} else {
				i++;
			}
		}		
		k++;
	} while (std::pow(p, 2) < v_prime.back());

	std::cout << "All the prime numbers: ";
	std::copy(v_prime.begin(),v_prime.end(),std::ostream_iterator<int>(std::cout, " " ));
	std::cout << std::endl;

	return 0;
}
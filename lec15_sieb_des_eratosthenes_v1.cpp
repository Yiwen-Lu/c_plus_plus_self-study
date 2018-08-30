#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <iterator>
#include <cmath>

int main() {
	// generate an integer list:
	std::cout << "Please input an integer: " << std::endl;
	std::string num;
	getline (std::cin, num);
	int max_n;
	std::stringstream(num) >> max_n;

	std::vector<int> v_prime;
	for (int n=2; n<=max_n; n++) v_prime.push_back(n);

	// check if prime:
	int p = 0;
	int k = 0;
	while (std::pow(p, 2) < v_prime.back()) {
		p = v_prime[k];
		//std::cout << "p = " << p << std::endl;
		int i = k + 1;
		while (i < v_prime.size()) {
			if (v_prime[i] % p == 0) {
				//std::cout << "v_prime[i] = " << v_prime[i] << std::endl;
				v_prime.erase(v_prime.begin() + i);

				//std::cout << "current v_prime: ";
				//std::copy(v_prime.begin(),v_prime.end(),std::ostream_iterator<int>(std::cout, " " ));
				//std::cout << std::endl;

			} else {
				i++;
			}
		}		
		k++;
	}

	std::cout << "All the prime numbers: ";
	std::copy(v_prime.begin(),v_prime.end(),std::ostream_iterator<int>(std::cout, " " ));
	std::cout << std::endl;

	return 0;
}

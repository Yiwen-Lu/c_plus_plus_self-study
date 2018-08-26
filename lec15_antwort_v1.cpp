#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>

int main() {
	std::vector<std::string> Antwortmoeglichkeit;
	srand(time(NULL));

	std::cout << "Gebe eine Frage ein: " << std::endl;
	std::string Frage;
	getline (std::cin, Frage);

	int i = 0;
	while (i < 10) {
		std::cout << "Gebe eine Antwort ein: " << std::endl;
		std::string Antwort;
		getline (std::cin, Antwort);
		Antwortmoeglichkeit.push_back(Antwort);
		i = i + 1;
	}

	int RandIndex = rand() % 10;
	std::cout << "Zu deiner Frage \"" << Frage << 
		"\" wurde folgende Antwort ausgesucht: " << 
		Antwortmoeglichkeit[RandIndex] << std::endl;
}
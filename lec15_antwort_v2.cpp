#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <string>
#include <sstream>

int main() {
	std::vector<std::string> Antwortmoeglichkeit;
	srand(time(NULL));

	std::cout << "Gebe eine Frage ein: " << std::endl;
	std::string Frage;
	getline (std::cin, Frage);

	std::string Zahl;
	int k;
	std::cout << "Wie viele Moeglichkeiten der Antworten gibt es: " << std::endl;
	getline (std::cin, Zahl);
	std::stringstream(Zahl) >> k;
	// Ref: http://www.cplusplus.com/doc/tutorial/basic_io/

 	for (int i = 1; i <= k; i++) {
 		// for loop Ref: https://cal-linux.com/tutorials/loops.html
 		std::cout << "Gebe eine Antwort ein: " << std::endl;
		std::string Antwort;
		getline (std::cin, Antwort);
		Antwortmoeglichkeit.push_back(Antwort);
	}

	int RandIndex = rand() % k;
	std::cout << "Zu deiner Frage \"" << Frage << 
		"\" wurde folgende Antwort ausgesucht: " << 
		Antwortmoeglichkeit[RandIndex] << std::endl;
	return 0;
}
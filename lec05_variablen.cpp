#include <iostream>
#include <string>

int main(){
    std::cout << "Hallo, mein Tag war: " << std::endl;

    std::string beschreibung;
    std::cin >> beschreibung;

    std::cout << "Ich habe " << beschreibung
        << " aus einem Skript gelernt." << std::endl;
    std::cout << "Ich hoffe dir geht es genauso "
        << beschreibung << "." << std::endl;
    return 0;
}

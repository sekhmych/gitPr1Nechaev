#include <iostream>
#include <string>

// Main, point of programm
int main() {
	// Name contains, user name
	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Hello world from " << name << std::endl;
	return 0;
}

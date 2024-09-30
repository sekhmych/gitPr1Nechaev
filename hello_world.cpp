#include <iostream>
#include <string>

// Entry point
int main() {
	// Saving user_name
	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Hello world from " << name << std::endl;
	return 0;
}

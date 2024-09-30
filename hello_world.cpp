#include <iostream>
#include <string>

// Стартовая точка программы
int main() {
	// Name contains, имя пользователя
	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Hello world from " << name << std::endl;
	return 0;
}

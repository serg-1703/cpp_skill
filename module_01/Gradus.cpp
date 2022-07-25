#include <iostream>

int main() {

	float celsia = 0;
	std::cout << "Enter temperature in Celsia: ";
	std::cin >> celsia;
	std::cout << "Your temperature in Faringite is " << ((celsia * 9) / 5 + 32) << std::endl;

	return 0;
}

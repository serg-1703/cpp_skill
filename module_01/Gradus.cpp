#include <iostream>

int main() {

	float cel = 0;
	std::cout << "Enter temperature in Celsia: ";
	std::cin >> cel;
	std::cout << "Your temperature in Faringite is " << ((cel * 9) / 5 + 32) << std::endl;

	return 0;
}

#include <iostream>

int main() // credits to exprssn for helping <3
{
	unsigned int years{};
	float days{};

	std::printf("How old are you? ");
	std::cin >> years;

	std::printf("How many days has it been since your birthday? ");
	std::cin >> days;

	float age = (days / 365) + years;

	std::cout << "You are " << age << " years old.\n";

	std::cin.get();
	return 0;
}

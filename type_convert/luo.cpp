#include <iostream>
#include <string>

struct Luo {
	int a, b, c;
};

int main() {
	Luo luo{ 3,4,5 };

	int* a = (int*)((char*)&luo + 4);

	std::cout << *a << std::endl;

	std::cin.get();
}

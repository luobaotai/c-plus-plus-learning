#include <iostream>
#include <string>

template<typename T, int N>
class Animal {
public:
	T food[N];

	int getSize() {
		return N;
	}
};

int main() {

	Animal<std::string, 12> dog;
	std::cout << dog.getSize() << std::endl;

	std::cin.get();
}

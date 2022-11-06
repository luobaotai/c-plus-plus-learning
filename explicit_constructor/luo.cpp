#include <iostream>
#include <string>

class Animal {
public:
	int age;
	std::string name;

	//加了explicit关键字的构造器，必须要显式转换
	explicit Animal(int a) : age(a), name("animal") {
		std::cout << "constructor1" << std::endl;
	}

	//没加explicit关键字的构造器，支持隐式转换，当然显式转换也支持
	Animal(std::string b) : age(0), name(b) {
		std::cout << "constructor2" << std::endl;
	}
};

int main() {
	//显式转换
	Animal dog = (Animal)1;
	//隐式转换
	Animal cat = std::string("suxi");
	

	float f1 = 2.1;
	float f2 = 3.9;
	int gg = (int)f1 + (int)f2;

	std::cout << gg << std::endl;
	//隐式转换
	std::string d = "luo";

	std::cin.get();
}

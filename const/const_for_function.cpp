#include <iostream>
#include <string>

class Animal {
public:
	int age;
	mutable int leg;

	Animal() : age(1), leg(4) {
	}

	//成员函数加const修饰，那么不能更改类的成员变量，除非这个变量用mutable修饰
	void setAnimal() const {
		//age = 6; //不能修改
		leg = 8;
	}
};

int main() {
	
	Animal dog;

	std::cout << dog.age << std::endl;

	std::cin.get();
}

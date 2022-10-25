#include <iostream>
#include <string>

//只有纯虚函数的类又叫做接口
class Animal {
public:
	//纯虚函数
	virtual void GetName() = 0;
};

class Dog : public Animal {
public:
	std::string name;

	Dog() : name("dog") {
	}

	void GetName() {
		std::cout << name << std::endl;
	}
};

class Cat : public Animal {
public:
	std::string name;

	Cat() : name("cat") {
	}

	void GetName() {
		std::cout << name << std::endl;
	}
};

int main() {

	Dog* d = new Dog();

	Cat* c = new Cat();

	Animal* a;

	a = d;
	a->GetName();

	a = c;
	a->GetName();

	std::cin.get();
}

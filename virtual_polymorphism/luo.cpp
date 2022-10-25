#include <iostream>
#include <string>

//多态
class Animal {
public:
	virtual void GetName() {
		std::cout << "animal" << std::endl;
	}
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

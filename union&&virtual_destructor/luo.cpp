#include <iostream>
#include <string>

struct Vec4 {
	int x, y, z, w;
};

union
{
	struct {
		int a, b, c, d;
	};

	Vec4 v;
} u;


class Animal {
public:
	Animal() { 
		std::cout << "animal constructor" << std::endl;
	}
	virtual ~Animal() {
		std::cout << "animal destructor" << std::endl;
	}
};

class Dog: public Animal {
public:
	Dog() {
		food = new int(3);
		std::cout << "dog constructor" << std::endl;
	}
	~Dog() {
		delete food;
		std::cout << "dog destructor" << std::endl;
	}

private:
	int* food;
};


int main() {

	u.a = 666;

	std::cout << u.v.x << std::endl;

	Animal* a = new Animal();
	delete a;
	std::cout << "---------------------------------------" << std::endl;

	Dog* d = new Dog();
	delete d;
	std::cout << "---------------------------------------" << std::endl;

	Animal* c = new Dog();
	delete c;

	std::cin.get();
}

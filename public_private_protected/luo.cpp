#include <iostream>
#include <string>

class Animal {
  //private对子类不可见，protected对子类可见
private:
	std::string name;

public:

	Animal() : name("animal") {
	}

	std::string getName() {
		return name;
	}

	void setName(std::string newName) {
		name = newName;
	}
};

int main() {

	Animal a;
	//用public的成员函数来操作private的成员变量
	//起到的作用就是保护name成员变量
	std::cout << a.getName() << std::endl;

	//如果想更改name，必须通过Animal类提供的函数API接口
	a.setName("king");

	std::cout << a.getName() << std::endl;

	std::cin.get();
}
